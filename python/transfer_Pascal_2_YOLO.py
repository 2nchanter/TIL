import os
import re

def parse_voc_xml(xml_content):
    """Extract image size and bounding boxes from Pascal VOC XML content."""
    # 이미지 크기 추출
    width = int(re.search(r"<width>(\d+)</width>", xml_content).group(1))
    height = int(re.search(r"<height>(\d+)</height>", xml_content).group(1))

    # 객체 정보 추출
    objects = []
    object_matches = re.findall(r"<object>(.*?)</object>", xml_content, re.DOTALL)
    for obj in object_matches:
        name = re.search(r"<name>(.*?)</name>", obj).group(1)
        xmin = int(re.search(r"<xmin>(\d+)</xmin>", obj).group(1))
        ymin = int(re.search(r"<ymin>(\d+)</ymin>", obj).group(1))
        xmax = int(re.search(r"<xmax>(\d+)</xmax>", obj).group(1))
        ymax = int(re.search(r"<ymax>(\d+)</ymax>", obj).group(1))

        objects.append((name, xmin, ymin, xmax, ymax))

    return width, height, objects

def voc_to_yolo_bulk(xml_dir, output_dir, class_names):
    """
    Convert all Pascal VOC XML files in a directory to YOLO .txt format (without xml package).
    
    :param xml_dir: Directory containing Pascal VOC XML files
    :param output_dir: Directory to save YOLO .txt label files
    :param class_names: List of class names
    """
    os.makedirs(output_dir, exist_ok=True)

    for xml_file in os.listdir(xml_dir):
        if not xml_file.endswith(".xml"):
            continue
        
        xml_path = os.path.join(xml_dir, xml_file)
        with open(xml_path, "r", encoding="utf-8") as file:
            xml_content = file.read()
        
        width, height, objects = parse_voc_xml(xml_content)

        yolo_labels = []
        for name, xmin, ymin, xmax, ymax in objects:
            if name not in class_names:
                print(f"Skipping unknown class: {name}")
                continue
            
            class_id = class_names.index(name)
            x_center = ((xmin + xmax) / 2) / width
            y_center = ((ymin + ymax) / 2) / height
            bbox_width = (xmax - xmin) / width
            bbox_height = (ymax - ymin) / height

            yolo_labels.append(f"{class_id} {x_center:.6f} {y_center:.6f} {bbox_width:.6f} {bbox_height:.6f}")

        # YOLO 텍스트 파일 저장
        output_path = os.path.join(output_dir, os.path.splitext(xml_file)[0] + ".txt")
        with open(output_path, "w", encoding="utf-8") as f:
            f.write("\n".join(yolo_labels))

        print(f"Converted: {xml_file} → {output_path}")

# 예제 실행
voc_to_yolo_bulk(
    xml_dir=r"D:\MAIN\test\labels_xml", 
    output_dir=r"D:\MAIN\test\yolo_labels", 
    class_names=["Slit"]
)