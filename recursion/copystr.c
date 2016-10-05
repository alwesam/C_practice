#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef char* string;

int main(void)
{

  //char* a = "hello"; //problem
  //http://stackoverflow.com/questions/23687437/segmentation-fault-cause-by-toupper/23687476#23687476
  char* a  = "hello"; //no problem
  printf("I have entered %s\n",a);

 //**********
  //char b[] = a //problem
  //char* b = a;  //no problem
  
 //**********
  char* b = malloc((strlen(a)+1) * sizeof(int));
  int i, n;
  for(i=0, n=strlen(a); i<=n; i++)
    b[i] = a[i];

 //**********

  printf("capitalizing copy:\n");

  b[0] = toupper(b[0]);

  printf("Original: %s, Copy: %s\n", a,b);

  //free(a);
  free(b);

  return 0;

}
