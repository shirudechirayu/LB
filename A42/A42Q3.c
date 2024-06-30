#include<stdio.h>
#include<stdlib.h>

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

int additionEven(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        if(first->data % 2 == 0)
            iSum += first->data;
        first = first->next;
    }

    return iSum;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head,41);
    insertFirst(&head,32);
    insertFirst(&head,20);
    insertFirst(&head,11);

    iRet = additionEven(head);

    printf("Sum of all even elements is: %d\n",iRet);

    return 0;
}