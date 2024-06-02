#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL check(int arr[], int iLength, int iNo)
{
    int i = 0;
    BOOL bFlag = FALSE;

    for(i = 0; i < iLength; i++)
    {
        if(arr[i] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0,  iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;
    int* p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the number to search:\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");

        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is absent\n");
    }

    free(p);

    return 0;
}