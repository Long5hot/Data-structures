#include<stdio.h>
#include<stdlib.h>
#define true 1
typedef struct stack
{
    int num;
    struct stack * next;
}STACK;


void push(STACK **);
void pop(STACK **);
void print_data(STACK *);

int main(int argc, char const *argv[])
{
    int op;
    STACK * headptr = 0;
    while(true) {
        printf("**-----------------------------------**\n");
        printf("ENter the operation you want to do..\n");
        printf("1)PUSH 2)POP 3)Print_data 4)clear screen 5)EXIT\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            push(&headptr);
            break;
        case 2:
            pop(&headptr);
            break;
        case 3:
            print_data(headptr);
            break;
        case 4:
            system("clear");
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}

void push(STACK **ptr) {
    STACK *new;
    new = (STACK *) malloc(sizeof(STACK));
    printf("Enter the element : \t");
    scanf("%d",&new->num);

    new->next = *ptr;
    *ptr = new;

}

void pop(STACK **ptr) {
    if(*ptr == NULL) {
        printf("stack is underflow\n");
        return;
    }
    STACK * del = *ptr;
    printf("Deleted : %d\n",del->num);
    *ptr = (*ptr)->next;
    free(del);
}

void print_data(STACK *ptr) {
    if(ptr==NULL) {
        printf("Stack is empty\n");
        return;
    }
    while(ptr) {
        printf("%d ",ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}