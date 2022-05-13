#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define true 1

typedef struct circuler
{
    struct circuler * prev;
    int no;
    char name[16];
    float marks;
    struct circuler * next;    
}CDLL;

void add_begin(CDLL **);
void show_records(CDLL *);
void show_records_reverse(CDLL *ptr);

