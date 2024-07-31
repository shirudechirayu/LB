#include<stdio.h>
#include<stdlib.h>

int addDiagonal(int **mat, int no1, int no2)
{
    int i = 0, iSum = 0;

    if(no1 != no2)
    {
        return -1;
    }

    for(i = 0; i < no1; i++)
    {
        iSum += mat[i][i];
    }

    return iSum;
}

int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0, iRet = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iRow);

    printf("Enter the number of columns\n");
    scanf("%d",&iCol);

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

    iRet = addDiagonal(arr, iRow, iCol);

    printf("Sum of diagonal elements is: %d\n", iRet);

    return 0;
}