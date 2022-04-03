#include <stdio.h>

int main(void) {
int temp = 0;

printf("insert temp: ");
scanf("%d", &temp);

if (temp < 0){
  printf("영하\n");
} else if (temp >= 0){
  printf("영상\n");
} else{
  printf("N/A\n");
}
printf("%d \n", temp);
  
}