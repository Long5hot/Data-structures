#include"header.h"
void show_records(CDLL *ptr) {
    if(ptr==NULL){
        printf("No records found\n");
        return;
    }
    CDLL * temp = ptr;
    do
    {
        printf("%2d %10s %3f\n",temp->no,temp->name,temp->marks);
        temp = temp->next;
    } while (temp!=ptr);
    
}

void show_records_reverse(CDLL *ptr){
    if(ptr==NULL){
        printf("No records found\n");
        return;
    }
    CDLL * temp = ptr;
    temp = temp->prev;
    do{
        printf("%3d %16s %3f\n",temp->no,temp->name,temp->marks);
        temp = temp->prev;
    } while ((temp->next)!=ptr);
}