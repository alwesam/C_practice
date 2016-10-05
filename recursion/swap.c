#include <stdio.h>

void swap(int *a, int* b);

int main(void)
{
  int x = 1;
  int y = 2;
  printf("before swapping: x is %d and y is %d\n",x,y);
  swap(&x,&y); //pass the address of x and y
  printf("after swapping: x is %d and y is %d\n",x,y);
}

void swap(int* a, int* b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
