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

void sumDigit(PNODE first)
{
    int i = 0;
    int iSum = 0, iNo = 0;

    if(first == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(first != NULL)
        {
            iSum = 0;
            iNo = first->data;

            while(iNo != 0)
            {
                iSum += iNo % 10;
                iNo /= 10;
            }

            printf("%d ",iSum);
            first = first->next;
        }
    }    
}

int main()
{
    PNODE head = NULL;

    insertFirst(&head,640);
    insertFirst(&head,240);
    insertFirst(&head,20);
    insertFirst(&head,230);
    insertFirst(&head,110);

    sumDigit(head);

    return 0;
}