#include<stdio.h>
#include<stdlib.h>

int maxDiagonal(int **mat, int no1, int no2)
{
    int i = 0, iMax = mat[0][0];

    if(no1 != no2)
    {
        return -1;
    }

    for(i = 0; i < no1; i++)
    {
        if(iMax < mat[i][i])
        {
            iMax = mat[i][i];
        }

        if(iMax < mat[i][no1-1-i])
        {
            iMax = mat[i][no1-1-i];
        }
    }

    return iMax;
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

    iRet = maxDiagonal(arr, iRow, iCol);

    printf("Max of diagonal elements is: %d\n", iRet);

    return 0;
}