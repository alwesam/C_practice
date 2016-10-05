#include <stdio.h>

int main(int argc, char* argv[])
{

  if (argc < 2)
    return 0;

  char* s = argv[1];
  char* t = argv[2];

  if (s != NULL && t != NULL)
  {
    if (strcmp(s,t) == 0)
      printf("You entered the same thing\n");
    else
      printf("You entered different things\n");
  }

}
