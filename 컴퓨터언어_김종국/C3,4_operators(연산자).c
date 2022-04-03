#include<stdio.h>

main(){
  int a = 5, b = 2, c = -5, d = -2;
  int x;
  printf("ㅡㅡ산술 연산자ㅡㅡㅡㅡㅡㅡㅡㅡ\n");
  printf("a+b : %d\n", a+b);
  printf("a-b : %d\n", a-b);
  printf("a*b : %d\n", a*b);
  printf("a/b : %d\n", a/b);
  printf("a/d : %d (나눗셈은 다른부호일땐 마이너스)\n", a/d);
  printf("c/d : %d\n", c/d);
  printf("a%b : %d\n", a%b);
  printf("c%%d : %d (나머지는 나눠지는 수 부호 따라감)\n", c%d);
  
  printf("ㅡㅡ논리 연산자ㅡㅡㅡㅡㅡㅡㅡㅡ\n");
  printf("크거나같다 >=, 같지않다 =!\n");
  printf("AND &&, OR ||, NOT !\n");
  printf("a+=1 : %d\n", a+=1);
  printf("++a : %d (1을 더해서 사용)\n", ++a);
  printf("a++ : %d (지나가면 1이 더해짐)\n", a++);
  printf("a : %d(후에 1 더해진 결과)\n", a);
  
  printf("ㅡㅡ삼항 연산자ㅡㅡㅡㅡㅡㅡㅡㅡ\n");
  a = 5, b = 2;
  x = a>b ? a : b;
  printf("%d\n", x);

  if (a>b)
    x = a;
  else
    x = b;
  printf("%d\n", x);
  printf("***연산순서는 콤마 < 대입 < 논리 < 관계 < 산술 < 단항***\n");

  printf("ㅡㅡ형변환ㅡㅡㅡㅡㅡㅡㅡㅡ\n");
  x = 5;
  printf("%lf\n", (double) x);
}