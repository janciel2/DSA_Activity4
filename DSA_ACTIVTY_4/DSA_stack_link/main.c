#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack_link.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	List l;
	bool pushTry, popTry;
	int numPeek;
	int men = 1, x, y;

	initList(&l);
	
	while(men == 1)
	{
		system("cls");
		printf("MENU: \n [1] Push\n [2] Pop \n [3] Peek \n [4] Exit\n");
		printf("\nWHAT OPERATION DO YOU WANT TO USE: \n");
		scanf("%d", &x);
		
		switch(x)
			{
				case 1: printf("\ninput number[PUSH]: ");
				scanf("%d", &y);
				pushTry = push(&l, y);
				if(pushTry)
					{
						printf("\nSUCCESSFUL");
						getch();
					}
				else
					{
						printf("\nUNSUCCESSFUL");
					}
				break;
				
				case 2: printf("\n[POP]");
					popTry = pop(&l);
					if(popTry)
						{
							printf("\nPOP SUCCESSFUL");
							getch();
						}
					else
						{
							printf("\nUNSUCCESSFUL");
						}
	
				break;
				
				case 3: numPeek = peek(l);
				printf("\n%d ", numPeek);
				getch();
				break;
				
				system("cls");
				case 4: printf("THANK YOU!");
				men = 0;
			}
	} 
return 0;
}
	
	
	
	
	
