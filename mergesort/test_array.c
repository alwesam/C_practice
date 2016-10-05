#include <stdio.h>
#include <stdlib.h>

int * arrayfunc(int *array, int size)
{
  printf("size is %d\n", size);
  int final_size = size*2;
  printf("final size is %d\n", final_size);

  //int darray[final_size];
  int* darray = malloc(final_size);

  int i;
  for(i=0; i<size; i++)
    darray[i] = array[i];

  int j;
  for(i=size, j=0; i<final_size; i++)
    darray[i] = array[j];

  return darray;

}

int main(void)
{

  int array[] = {1,2,3,4};

  int size = sizeof(array)/sizeof(int); //correct

  int *rand;
  rand = arrayfunc(array,size);
   
  if (rand)
  {

    int i;
    for(i=0; i<size*2;i++)
      printf("%d, ",rand[i]);
    printf("\n");

    //free(rand); //problem??
  }

}
