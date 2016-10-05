#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
  char symbol;
  float frequency;
  struct node* left;
  struct node* right;
} node;
