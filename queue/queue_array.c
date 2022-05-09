#include<stdio.h>
#include<stdlib.h>
int front=0,rear = 0;
#define size 5
void enque(int *s);
void deque(int *s);
void print(int *s);
int main(int argc, char const *argv[])
{
    int que[size];
    int op;

    while(1) {
        printf("Enter the operation..\n");
        printf("1)Enque 2)Deque 3)Print 4)Clear_screen 5)Exit\n");
        scanf("%d",&op);
        switch(op) {
            case 1: enque(que);
                    break;
            case 2: deque(que);
                    break;
            case 3: print(que);
                    break;
            case 4: system("clear");
                    break;
            case 5: exit(0);

        }
    }
    return 0;
}

void enque(int *s) {
    if(rear>=size) {
        printf("Queue is Overflow\n");
        return;
    }
    printf("Enter the element :\t");
    scanf("%d",&s[rear]);
    rear++;
}

void deque(int *s) {
    if(rear<=front) {
        printf("Queue is underflow.\n");
        return;
    }
    printf("Deleted : %d\n",s[front]);
    for(int i=front;i<rear-1;i++) {
        s[i] = s[i+1];
    }
    rear--;
}

void print(int *s) {
    if(rear==front){
        printf("queue is empty\n");
        return;
    }
    for(int i=front;i<rear;i++)
        printf("%d ",s[i]);
    printf("\n");
}