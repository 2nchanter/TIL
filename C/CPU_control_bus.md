## 0.8 CPU가 일하는 방법
![Image](https://github.com/user-attachments/assets/e6c0e76c-95c8-4c16-bd8d-af640faa31f3)
*program counter(PC) : 다음에 가져올(fetch) 명령어의 메모리 주소를 저장
                       명령어를 가져온 후에는 자동으로 증가하여 다음 명령어 주소를 가리
*memory adress register : 현재 접근하고자 하는 메모리 주소를 저장
*memory data register : 메모리와 CPU 사이에서 데이터를 주고받는 임시 저장소
                        데이터 형식이 명령어 일지라도, 일단 이곳을 거침
*current instruction register : 가져온 명령어를 해석하고 실행하기 위해 저장하는 곳 (명령어 디코딩)
*accumulator : 연산 결과를 임시 저장하는 레지스터 (주로 ALU와 연결)

*control bus - control unit : 명령어를 해석하고 제어 신호를 생성하여 CPU 내부 및 메모리, 입출력 장치를 제어
             - arithmetic logic unit(ALU) : 산술 연산(덧셈, 뺄셈 등) 및 논리 연산(AND, OR 등)을 수행
                                            (Accumulator와 레지스터의 데이터를 가져와서)
