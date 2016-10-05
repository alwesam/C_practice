#include <stdio.h>

#define MAX 500

int multi(int res[], int num, int size)
{
  //initialize carry
  int carry = 0;
  int prod  = 1;

  int i;
  for(i=0;i<size;i++)
  {
    prod = res[i]*num+carry;
    //update res[i]
    res[i] = prod % 10;
    //update carry
    carry  = prod / 10;
  }

  while (carry > 0)
  {
    res[size] = carry%10;
    carry     = carry/10;
    size      = size+1;
  }
  
  return size;

}

void factorial(int num)
{
  
  int res[MAX];
  int res_size = 1;
  res[0] = 1;

  int i;

  for(i=2; i<=num; i++)
    res_size = multi(res,i,res_size); //update size

  int j;
  printf("The result is: \n");
  for(j=res_size-1; j>=0; j--)
    printf("%d", res[j]);

  printf("\n");

}

int main(void)
{
  int num;
  printf("Give me a number: ");
  scanf("%d", &num);
  factorial(num);

}
