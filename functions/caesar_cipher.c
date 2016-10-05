#include <stdio.h>
#include <string.h>

typedef char* string;
static const int num_letters  = 26;
static const char alphabet[]  ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int position(char l)
{
  int i;
  int pos;
  for(i=0; i < num_letters; i++)
    if(alphabet[i] == l)
      pos = i;

  return pos;
}

string shift_letters(string word,int key)
{
  int i;
  int new_pos;
  
  for(i=0; i<strlen(word); i++) 
  {
    new_pos = position(word[i])+key;
    if (new_pos > 25)
      new_pos = new_pos-26;
    else if (new_pos < 0)
      new_pos = new_pos+26;
    word[i] = alphabet[new_pos];
  }

  return word;

}

int main(int argc, string argv[])
{

  if (argc < 2)
   printf("Give me a word\n");
  else
  {
    string word = argv[1];

    int key;
    if (argc > 2)
      key  = atoi(argv[2]) % num_letters;
    else
      key = 0;

    printf("You Entered: %s\n", word);
    shift_letters(word,key);
    printf("New word is %s\n",word);

  } 
  
  return 0;
}
