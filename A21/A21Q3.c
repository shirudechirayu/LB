#include<stdio.h>
#include<stdlib.h>

int firstOcc(int arr[], int iLength, int iNo)
{
    int i = 0, index = -1;

    for(i = iLength - 1; i >= 0; i--)
    {
        if(arr[i] == iNo)
        {
            index = i;
            break;
        }
    }

    return index;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
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

    iRet = firstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurrence of number is %d",iRet);
    }

    free(p);

    return 0;
}