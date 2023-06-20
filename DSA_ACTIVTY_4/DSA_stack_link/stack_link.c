#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include "stack_link.h"
#include<stdlib.h>


void initList(List *l)
{
     l->top = NULL;
     printf("\nSUCCESSFULLY INITIALIZED");
}

bool push(List *l, DATA item)
{
	Node *tempList;
	bool inserted = false;
	//revise

		tempList = (Node *) malloc(sizeof(Node));
		
		if(tempList != NULL)
			{
				tempList->data = item;
				tempList->next = l->top;
				l->top = tempList;
				inserted = true;
			}
	return inserted;
}

bool pop(List *l)
{
	Node *ptr;
	bool deleted = false;
	
	if(l->top != NULL)
		{
			ptr = l->top;
			l->top = l->top->next;
			free(ptr);
			deleted = true;
		}
	return deleted;
}

int peek(List l)
{
	int val;

	val = l.top->data;
	return val;
}

