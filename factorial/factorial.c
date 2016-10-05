#include<stdio.h>

unsigned long factorial(number) {
  if (number < 2) {
    return 1;
  } else {
    return number*factorial(number-1);
  }
}

int main(int argc, char *argv[]) {
  int num; 
  unsigned long f;
  printf("Give me a number: ");
  scanf("%d", &num);
  f = factorial(num); 
  printf("%d factorial is: %lu\n",num,f);
  return 0;
}
