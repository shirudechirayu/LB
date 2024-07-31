#include<stdio.h>
#include<stdlib.h>

int countFrequency(int **mat, int no1, int no2, int no3)
{
    int i = 0, j = 0, iFreq = 0;

    for(i = 0 ; i < no1; i++)
    {
        for(j = 0; j < no2; j++)
        {
            if(mat[i][j] == no3)
            {
                iFreq++;
            }
        }
    }

    return iFreq;
}

int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0, iRet = 0, iNo = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iRow);

    printf("Enter the number of columns\n");
    scanf("%d",&iCol);

    printf("Enter the number to search\n");
    scanf("%d",&iNo);

    int **arr = malloc(iRow*sizeof(int*));

    for(i = 0; i < iRow; i++)
    {
        *(arr + i) = malloc(iCol*sizeof(int));
    }

    printf("Enter the elements of matrix\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    iRet = countFrequency(arr, iRow, iCol, iNo);

    printf("Frequency of the given element is: %d\n", iRet);

    return 0;
}