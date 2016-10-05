#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
  int n;
  struct node* next;
} node;

node * create(int m)
{
  node* new = malloc(sizeof(node));
  new->n = m;
  new->next=NULL; 
  return new;
}

void append(node* head, int m) 
{
  node* new = create(m); 
  head->next = new;
}

bool find(node* head, int m)
{

  node* current_node=head;
  do
  {
    if(current_node->n==m){
      return true;
    }
    current_node = current_node->next;
  }
  while(current_node != NULL);

  return false;

}

void insert(node* head, int m) 
{

  node* new_node =  create(m);
  node* current_node=head;

  while(current_node != NULL && ((current_node->next)->n) <= m);
  {
    current_node = current_node->next; 
  }

  new_node->next = current_node->next;
  current_node->next = new_node;

}

int main(void)
{
  node* n1 = create(6); 
  append(n1, 8);
  printf("I created a node: \n");
  printf("value stored is: %d\n",n1->n);

  printf("next node value is: \n");
  printf("value stored is: %d\n",(n1->next)->n);

  bool x = find(n1,6);
  bool y = find(n1,2);

  printf("do we have an 6?: %s\n", x ? "true" : "false" );
  printf("do we have an 2?: %s\n", y ? "true" : "false" );

  insert(n1,7);
  printf("new second value is: %d\n",(n1->next)->n);


}
