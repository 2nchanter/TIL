#include<stdio.h>
void main(void){
  float x, p;
  double y, q;
  unsigned k;
  int m = 54321;
  long int n = 1234567890;
  x = 1.23456789000;
  y = 9.87654321;
  k = 54321;
  p = q = 1.0;

  printf("%d\n", m);
  printf("%ld\n", n);
  printf("%.12lf\n", x);
  printf("%f\n", x);
  printf("%lf\n", y);
  printf("%u, %f, %.12lf\n", k, p, q);
}