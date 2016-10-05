#include <stdio.h>
#include <stdlib.h>

int * merge(int array1[], int array2[], int size1, int size2)
{
  int final_size = size1+size2;

  //int merged_array[final_size];
  int* merged_array = malloc(final_size*sizeof(int));

  int i=0;
  int i1=0;
  int i2=0;

  while(i1 < size1 && i2 < size2)
  {
    if(array1[i1] < array2[i2])
    {
      merged_array[i] = array1[i1];
      i1++;
    }
    else
    {
      merged_array[i] = array2[i2];
      i2++;
    }
    i++;
  }

  while(i1< size1 && i<final_size) {
    merged_array[i] = array1[i1];
    i1++;
    i++;
  }

  while(i2< size2 && i<final_size) {
    merged_array[i] = array2[i2];
    i2++;
    i++;
  }

  return merged_array;

}

int * mergesort(int array[],int size)
{
  if (size < 2)
  {
    return array;
  }

  int size1 = size/2;
  int size2 = size-size1;

  int* lhalf = malloc(size1*sizeof(int));
  int* rhalf = malloc(size2*sizeof(int));

  int i;
  for(i=0; i<size1; i++)
  {
    lhalf[i] = array[i]; 
  }
  for(i=0; i<size2; i++)
  {
    rhalf[i] = array[i+size1];
  }

  int* lhalf_sorted = mergesort(lhalf,size1);
  int* rhalf_sorted = mergesort(rhalf,size2);

  return merge(lhalf_sorted,rhalf_sorted,size1,size2);
}

int main(void)
{
  int array[] = {3,1,5,4,6,8,9,7,10};
  int size = sizeof(array)/sizeof(int);
  
  int* rand = mergesort(array,size);

  int i;
  printf("input array:\n");
  for(i=0; i<size; i++)
    printf("%d\n",array[i]);
  printf("sorted array:\n");
  for(i=0; i<size; i++)
    printf("%d\n",rand[i]);
}
