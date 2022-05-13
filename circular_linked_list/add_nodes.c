#include"header.h"
void add_begin(CDLL **ptr) 
{
    CDLL * new = (CDLL *)malloc(sizeof(CDLL));

    printf("Enter the information\n");
    printf("Rollno Name Marks\n");
    scanf("%d %s %f",&new->no,new->name,&new->marks);
    if(*ptr==NULL){
        new->prev = new;
        new->next = new;
    }
    else {
        new->next = *ptr;
        new->prev = (*ptr)->prev;
        (*ptr)->prev = new;
        new->prev->next = new;
    }
    *ptr = new;
}