#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
  if (argc < 2)
    return 0;

  char *s = argv[1];

  if (s == NULL)
  {
    return 0;
  }

  int i, n;
  for(i=0, n=strlen(s); i<n; i++)
  {
    //printf("%c\n", s[i]);
    //s[i]  === *(s+i)
    printf("%c\n", *(s+i));
  }

}
