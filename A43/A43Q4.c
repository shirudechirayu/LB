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

void displaySmall(PNODE first)
{
    int iNo = 0;
    int iSmall = 0;

    while(first != NULL)
    {
        iNo = first->data;
        iSmall = iNo % 10;
        iNo /= 10;

        while(iNo != 0)
        {
            if(iSmall > iNo % 10)
                iSmall = iNo % 10;
            iNo /= 10; 
        }

        printf("%d ",iSmall);

        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;

    insertFirst(&head,415);
    insertFirst(&head,532);
    insertFirst(&head,250);
    insertFirst(&head,11);

    displaySmall(head);

    return 0;
}