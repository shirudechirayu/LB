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

void displayPrime(PNODE first)
{
    int i = 0;
    BOOL bFlag = FALSE;

    if(first == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(first != NULL)
        {
            bFlag = TRUE;

            for(i = 2; i <= (first->data)/2; i++)
            {
                if((first->data) % i == 0)
                {
                    bFlag = FALSE;
                    break;
                }
            }

            if(bFlag == TRUE)
            {
                printf("%d ",first->data);
            }

            first = first->next;
        }
    }    
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

    displayPrime(head);

    return 0;
}