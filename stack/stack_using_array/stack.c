#include<stdio.h>
#include<stdlib.h>
#define size 5
#define true 1
int TOP = -1;

void push(int *);
void pop(int *);
void print(int *);

void main()
{
	int stk[size];
	int op;
	while (true)
	{
		printf("**--------------------------------------**\n");
		printf("Enter the opration you want to do..\n");
		printf("1)PUSH 2)POP 3)Print_data 4)clear_screan 5)Exit\n");
		scanf("%d",&op);
		switch (op)
		{
		case 1:
			push(stk);
			break;
		case 2:
			pop(stk);
			break;
		case 3:
			print(stk);
			break;
		case 4:
			system("clear");
			break;
		case 5:
			exit(0);
		}
	}
}
void push(int *stk) {
	if(TOP>=size-1){
		printf("Stack is OVERFLOW\n");
		return;
	}
	TOP++;

	printf("Enter the element\t");
	scanf("%d",&stk[TOP]);

}

void pop(int *stk) {
	if(TOP<=-1){
		printf("Stack is underflow\n");
		return;
	}
	printf("Deleted the element : %d\n\n",stk[TOP]);
	TOP--;
}

void print(int *stk) {
	if(TOP==-1) {
		printf("Stack is empty\n");
		return;
	}
	for (int i = 0; i <= TOP; i++) {
		printf("%d ", stk[i]);
	}
	printf("\n");
}