 ```
 #anaconda에 있는 작업 환경을 목록으로 조회합니다.
 conda info --envs
 
 #새로운 작업환경 생성하기
 conda create -n test1 anaconda
 
 #작업환경 진입, 실행
 conda activate test1
 conda list
 
 #설치 가능한 python 목록 조회, 3.7.0 설치
 conda search python
 conda install python=3.7.0
 
 #python 버전 확인
 python --version
 
 #설치 가능한 tensorflow 목록 조회, 설치
 conda search tensorflow
 conda install tensorflow=2.0.0
 
 #Jupyter notebook 실행, 종료 (anaconda에서 pkg로 설치됨)
 Jupyter notebook / ctrl+c
 
 #작업환경 삭제하기
 conda info --envs
 conda deactivate (현재 사용중인 작업환경 off 후 base로 돌아감)
 conda remove -n test1 --all (y)
 ```
