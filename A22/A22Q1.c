#include<stdio.h>
#include<stdlib.h>

int maximum(int arr[], int iLength)
{
    int i = 0, iLargest = arr[0];

    for(i = 1; i < iLength; i++)
    {
        if(arr[i] > iLargest)
        {
            iLargest = arr[i];
        }
    }

    return iLargest;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int* p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

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

    iRet = maximum(p,iSize);

    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}