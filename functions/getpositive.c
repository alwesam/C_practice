#include <stdio.h>

typedef char* string;

//prototypes
int GetInt();
int GetPositiveInt(void);

int main(void)
{
  int n = GetPositiveInt();
  printf("Thanks for the %i!\n", n);
}

int GetInt(void) 
{
  /*int n;
  scanf("%d", &n);
  return n;*/

  char n[10];
  int i=0, flag=1;
  scanf("%s", n);

  while(n[i] != '\0') {
    flag = isdigit(n[i]); //what's isdigit
    if (!flag) break;
    i++;
  }

  if (flag)
    i = atoi(n); //what's atoi
  else
    i = -1;

  return i;

}

int GetPositiveInt(void) 
{
  int n;
  do
  {
    printf("Give me a positive number: ");
    n  = GetInt();  
  } while(n < 1);
  return n;
}
