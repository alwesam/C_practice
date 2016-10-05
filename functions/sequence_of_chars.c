#include <stdio.h>
#include <string.h>

typedef char* string;

//TODO fix
string getString(void)
{
  string name;
  printf("Give me a name: ");
  scanf("%s", name);
  return name;
}

void main(void) 
{
  string name = getString();
  int i; //switch to C99 in order to declare i inside for loop
  for(i=0; i < strlen(name); i++) 
  {
    printf("%c\n", name[i]);
  }
}
