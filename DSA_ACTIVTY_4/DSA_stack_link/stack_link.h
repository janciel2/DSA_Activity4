#ifndef STACK_IMP_H
#define STACK_IMP_H
#define MAX 10

#include<stdbool.h>


typedef int DATA;
typedef struct node
{
  DATA data;
  struct node *next;
} Node;

typedef struct {
	Node *top;
} List;


 

void initList(List *l);
bool push(List *l, DATA item);
bool pop(List *l);
int peek(List l);

#endif

