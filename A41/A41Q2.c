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

int searchLastOcc(PNODE first, int no)
{
    int iPos = -1;
    int i = 1;

    while(first != NULL)
    {
        if(first->data == no)
        {
            iPos = i;
        }  
        i++;
        first = first->next;
    }

    return iPos;
}

int main()
{
    PNODE head = NULL;
    int iValue = 0, iRet = 0;

    insertFirst(&head,101);
    insertFirst(&head,51);
    insertFirst(&head,21);
    insertFirst(&head,11);
    insertFirst(&head,51);

    printf("Enter the elements to search:\n");

    scanf("%d",&iValue);

    iRet = searchLastOcc(head,iValue);

    if(iRet == -1)
    {
        printf("This element is not present in the list\n");
    }
    else
    {
        printf("First occurence of element is at: %d\n",iRet);
    }

    return 0;
}