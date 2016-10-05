#include <stdio.h>

//TODO fix
int main(int argc, char* argv)
{
  FILE* thefile;
  char  ch;
  int   count = 0;

  //open file
  thefile = fopen(argv[1],"r");

  //check file isn't null
  if (thefile == NULL)
  {
    printf("NULL!!\n");
    return -1;
  }

  while((ch=fgetc(thefile)) != EOF)
    count++;

  //close file
  fclose(thefile);

  printf("You have %d chars in your file\n", count);

  return 0;
}
