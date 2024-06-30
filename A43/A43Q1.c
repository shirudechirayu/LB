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

void reverse(PPNODE first)
{
    PNODE temp1 = *first;
    PNODE temp2 = (*first)->next;
    PNODE temp3 = (*first)->next;

    while(temp3 != NULL)
    {
        temp3 = temp2->next;
        temp2->next = temp1;
        temp1 = temp2;
        temp2 = temp3;
    }

    (*first)->next = NULL;
    *first=temp1;
}

int main()
{
    PNODE head = NULL;

    insertFirst(&head,89);
    insertFirst(&head,6);
    insertFirst(&head,41);
    insertFirst(&head,17);
    insertFirst(&head,28);
    insertFirst(&head,11);

    display(head);

    reverse(&head);

    display(head);

    return 0;
}