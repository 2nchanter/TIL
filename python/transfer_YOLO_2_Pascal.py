import os

def yolo_to_voc_bulk(label_dir, image_dir, output_dir, class_names, image_size):
    """
    Convert all YOLO label files in a directory to Pascal VOC XML format.
    
    :param label_dir: Directory containing YOLO .txt label files
    :param image_dir: Directory containing corresponding image files
    :param output_dir: Directory to save Pascal VOC XML files
    :param class_names: List of class names
    :param image_size: Tuple (width, height, depth)
    """
    os.makedirs(output_dir, exist_ok=True)
    
    for label_file in os.listdir(label_dir):
        if label_file.endswith(".txt"):
            yolo_label_path = os.path.join(label_dir, label_file)
            image_filename = os.path.splitext(label_file)[0] + ".bmp"
            image_path = os.path.join(image_dir, image_filename)
            
            xml_content = f"""<annotation>
                <folder>images</folder>
                <filename>{image_filename}</filename>
                <path>{image_path}</path>
                <source>
                    <database>Unknown</database>
                </source>
                <size>
                    <width>{image_size[0]}</width>
                    <height>{image_size[1]}</height>
                    <depth>{image_size[2]}</depth>
                </size>
                <segmented>0</segmented>

            """

            with open(yolo_label_path, "r") as file:
                for line in file.readlines():
                    parts = line.strip().split()
                    if not parts[0].isdigit():
                        print(f"Skipping line: {line.strip()} (Invalid format)")
                        continue
                    
                    class_id = int(parts[0])
                    x_center, y_center, width, height = map(float, parts[1:])

                    xmin = int((x_center - width / 2) * image_size[0])
                    ymin = int((y_center - height / 2) * image_size[1])
                    xmax = int((x_center + width / 2) * image_size[0])
                    ymax = int((y_center + height / 2) * image_size[1])

                    xml_content += f"""
                <object>
                    <name>{class_names[class_id]}</name>
                    <pose>Unspecified</pose>
                    <truncated>0</truncated>
                    <difficult>0</difficult>
                    <bndbox>
                        <xmin>{xmin}</xmin>
                        <ymin>{ymin}</ymin>
                        <xmax>{xmax}</xmax>
                        <ymax>{ymax}</ymax>
                    </bndbox>
                </object>
                
                    """

            xml_content += "\n</annotation>"

            output_path = os.path.join(output_dir, os.path.splitext(image_filename)[0] + ".xml")
            with open(output_path, "w", encoding="utf-8") as f:
                f.write(xml_content.strip())
            print(f"Saved: {output_path}")

# Example usage
yolo_to_voc_bulk(
    image_dir=r"D:\MAIN\test\images", 
    label_dir=r"D:\MAIN\test\labels", 
    output_dir=r"D:\MAIN\test\labels_xml", 
    class_names=["Slit"], 
    image_size=(1280, 960, 3)
)
