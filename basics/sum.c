#include <stdio.h>

int getInt()
{
  int num;
  printf("Give me a number: ");
  scanf("%d", &num);
  return num;
}

int main(void)
{
  int a;
  a = getInt();

  if (a > 0) 
  {
    printf("The number %d is greater than 0\n", a);
  }
  else if (a==0)
  {
    printf("The number %d is equal to 0\n", a);
  }
  else
  {
    printf("The number %d is less than 0\n", a);
  }

}
