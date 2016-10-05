#include <stdio.h>
#include <string.h>

typedef char* string;

int main(int argc, string argv[])
{

  if (argc == 2)
    printf("hello, %s\n", argv[1]);
  else
    printf("hello, you\n");
    
}
