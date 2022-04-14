#include <stdio.h>
/*
# 영상, 영하
int main(void) {
int temp = 0;

printf("insert temp: ");
scanf("%d", &temp);

if (temp < 0){
  printf("영하\n");
}
else if (temp >= 0){
  printf("영상\n");
}
else{
  printf("N/A\n");
}
printf("%d \n", temp);
}

# 홀짝
int main(void) {
int x;

printf("정수를 입력하시오:\n");
scanf("%d", &x);

if (x%2==1)
  printf("입력된 정수는 홀수입니다.");
else
  printf("입력된 정수는 짝수입니다.");
}

# 조건 연산자
int main(void){
  
  int x, y;
  
  printf("첫번째 수=");
  scanf("%d", &x);
  
  printf("두번째 수=");
  scanf("%d", &y);
  
  printf("큰수=%d \n", (x > y) ? x : y);
  printf("작은수=%d \n", (x < y) ? x : y);
}

# or
int main(void){
  
  int x;
  
  printf("x : ");
  scanf("%d", &x);

  if((x==1)||(x==2)||(x==3)){
    printf("%d is in.", x);
  } else {
    printf("%d is not in.", x);
  }
}

# 큰수 - 작은수
int main(void){
  
  int x, y;

  printf("input x y :");
  scanf("%d %d", &x, &y);

  if(x>y){
    printf("%d", x-y);
  } else {
    printf("%d", y-x);
  }

}

# 배수 찾기
int main(void){
  
  int x, y;

  printf("input x:");
  scanf("%d", &x);

  if((x%2==0)&&(x%3==0)){
    printf("x is 2*, 3*");
  } else {
    printf("x is NOT 2*, 3*");
  }

}

# 동전던지기
#include <stdio.h>
#include <stdlib.h>

int main(void){

  printf("start \n");
  srand(time(NULL)); #랜덤이 랜덤이 아니므로 시간값을 난수에 활용함.

  int coin = rand()%2;

  if (coin==0) {
    printf("front");
  } else {
    printf("Back");
  }
}

# 윤년 계산기
#include <stdio.h>

int main(void){

  int x;
  
  printf("year : ");
  scanf("%d", &x);

  if ((x%4==0 && x%100!=0)|| x%400==0) {
    printf("T");
  } else {
    printf("F");
  }
}

# 3개의 정수중 가장 큰 수 찾기
#include <stdio.h>

int main(void){

  int x, y, z, big;
  
  printf("x y z : ");
  scanf("%d %d %d", &x, &y,&z);

  if (x>y) {
    big = x;
  } else {
    big = y;
  }

  if (big>z) {
    printf("%d", big);
  } else {
    printf("%d", z);
  }
}

# 점수 50, 150 넘기는 조건
#include <stdio.h>

int main(void){

  int x, y, z;
  
  printf("x y z : ");
  scanf("%d %d %d", &x, &y, &z);

  if (x>=50 && y>=50 && z>=50) {
    if (x+y>=150 || x+z>150) {
      printf("pass");
    }
  } else {
    printf("Fail");
  }
}

# 삼각형 찾기
#include <stdio.h>

int main(void){

  int x, y, z;
  
  printf("x y z : ");
  scanf("%d %d %d", &x, &y, &z);

  if (x+y>z && x+z>y && y+z>x) {
    printf("YES");
  } else {
    printf("NO");
  }
}

# 가위바위보
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

  int a;
  int b = rand()%3;
  
  printf("가위0 바위1 보2 : ");
  scanf("%d", &a);
  printf("b = %d\n", b);

  if (abs(a-b)==1) {
    if (a>b) {
      printf("a win");  
    } else {
      printf("b win");  
    }
  } else if (abs(a-b)==2) {
    if (a<b){
      printf("a win");  
    } else {
      printf("b win");  
    }
    } else {
      printf("none");
    }
}
*/