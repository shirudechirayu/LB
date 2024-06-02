#include<stdio.h>
#include<stdlib.h>

void range(int arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    for(i = 0; i <= iLength; i++)
    {
        if(arr[i] >= iStart && arr[i] <= iEnd)
        {
            printf("%d\t",arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int* p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point:\n");
    scanf("%d",&iValue2);

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

    range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}