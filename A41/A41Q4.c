#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

int maximum(PNODE first)
{
    int iMax = INT_MIN;

    if(first == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(first != NULL)
        {
            if(iMax < first->data)
            {
                iMax = first->data;
            }
            first = first->next;
        }
    }

    return iMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,101);
    insertFirst(&head,51);
    insertFirst(&head,21);
    insertFirst(&head,11);

    iRet = maximum(head);

    printf("Maximum in all the elements is: %d\n",iRet);

    return 0;
}