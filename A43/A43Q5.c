#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }

    printf("NULL\n");
}

void insertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void displayLarge(PNODE first)
{
    int iNo = 0;
    int iLarge = 0;

    while(first != NULL)
    {
        iNo = first->data;
        iLarge = iNo % 10;
        iNo /= 10;

        while(iNo != 0)
        {
            if(iLarge < iNo % 10)
                iLarge = iNo % 10;
            iNo /= 10; 
        }

        printf("%d ",iLarge);

        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;

    insertFirst(&head,419);
    insertFirst(&head,532);
    insertFirst(&head,250);
    insertFirst(&head,11);

    displayLarge(head);

    return 0;
}