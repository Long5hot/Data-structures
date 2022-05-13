#include"header.h"

int main() 
{
    CDLL *headptr = NULL;
    int op;

    while(true) 
    {
        printf("**------------------------------------**\n");
        printf("Enter your choice..\n");
        printf("1) Add_at_begin\n");
        printf("2) Show records\n");
        printf("3) Clear_Screen\n");
        printf("4) Show records in reverse order\n");
        printf("18)Exit\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:     add_begin(&headptr);
            break;
        case 2:     show_records(headptr);
            break;
        case 3:     system("clear");
            break;
        case 4:     show_records_reverse(headptr);
            break;
        case 18:    exit(0);

        default:
            break;
        }
    }
    return 0;    
}