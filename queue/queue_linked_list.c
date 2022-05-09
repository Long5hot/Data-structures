#include<stdio.h>
#include<stdlib.h>

typedef struct QUEUE
{
    int num;
    struct QUEUE * next; 
}queue;

void enqueue(queue**);
void dequeue(queue**);
void display(queue*);

int main(int argc, char const *argv[])
{
    queue * headptr = NULL;
    int op;
    while(1) {
        printf("Enter the operation..\n");
        printf("1)Enqueue 2)Dequeue 3)Display 4)Clear_screen 5)Exit\n");
        scanf("%d",&op);
        switch(op) {
            case 1: enqueue(&headptr);
                    break;
            case 2: dequeue(&headptr);
                    break;
            case 3: display(headptr);
                    break;
            case 4: system("clear");
                    break;
            case 5: exit(0);

        }
    }
}

void enqueue(queue ** ptr) {
    queue *new;
    new = (queue *) malloc(sizeof(queue));
    new->next = NULL;
    
    printf("Enter the element :\t");
    scanf("%d",&new->num);
    
    if(*ptr==NULL) {
        (*ptr) = new;
    }
    else {
        queue *last = *ptr;
        while(last->next)
            last = last->next;
        last->next = new;
    }        

}

void dequeue(queue **ptr) {
    if(*ptr==NULL) {
        printf("Queue is Underflow\n");
        return;
    }
    queue * del = *ptr;
    printf("Deleted : %d\n",(*ptr)->num);
    *ptr = (*ptr)->next;
    free(del);
}

void display(queue * ptr) {
    if(ptr==NULL){
        printf("Queue is Empty\n");
        return;
    }
    while(ptr) {
        printf("%d ",ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}