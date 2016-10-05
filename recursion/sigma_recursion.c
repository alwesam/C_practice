#include <stdio.h>

int sigma(int m)
{
  if(m < 1)
    return 0;
  else
    return m+sigma(m-1);
}

int main(void)
{

  int n;
  do
  {
    printf("Give me a positive number: ");
    scanf("%d", &n); 
  } while(n < 0);

  printf("The sum up to %d is %d\n",n,sigma(n));
  
}
