#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int iLength)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(arr[i] % 11 == 0)
            printf("%d\t",arr[i]);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    display(p,iSize);

    free(p);

    return 0;
}