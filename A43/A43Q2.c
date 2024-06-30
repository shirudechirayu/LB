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

void displayPalindrome(PNODE first)
{
    int iNo = 0;
    int iRev = 0;

    while(first != NULL)
    {
        iNo = first->data;
        iRev = 0;

        while(iNo != 0)
        {
            iRev *= 10;
            iRev += iNo % 10;
            iNo /= 10; 
        }

        if(first->data == iRev)
            printf("%d ",iRev);

        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;

    insertFirst(&head,89);
    insertFirst(&head,6);
    insertFirst(&head,414);
    insertFirst(&head,17);
    insertFirst(&head,28);
    insertFirst(&head,11);

    displayPalindrome(head);

    return 0;
}