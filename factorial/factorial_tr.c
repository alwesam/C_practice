#include<stdio.h>

long fact_tr(int n, long result)
{
  if (n==1)
    return result;
  else
    return fact_tr(n-1,n*result);
}

long factorial(int number) {
  return fact_tr(number, 1); 
}

int main(int argc, char *argv[]) {
  int num; 
  long f;
  printf("Give me a number: ");
  scanf("%d", &num);
  f = factorial(num); 
  printf("%d factorial is: %ld\n",num,f);
  return 0;
}
