#ifndef STACK_ARR_H
#define STACK_ARR_H
#define MAX 10

#include <stdbool.h>

typedef int DATA;
typedef struct stack
{
	DATA data[MAX];
	int top;
} *STACK;


void initList(STACK *s);
bool push(STACK *s, DATA x);
bool pop(STACK *s);
bool isEmpty(STACK *s);
bool isFull(STACK *s);
int peek(STACK *s);
void display(STACK s);




#endif