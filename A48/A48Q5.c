#include<stdio.h>
#include<stdlib.h>

void swapRows(int **mat, int iRow, int iCol)
{
    int i = 0, j = 0, temp = 0;

    for(i = 0; i < iRow - 1; i += 2)
    {
        for(j = 0; j < iCol; j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[i+1][j];
            mat[i+1][j] = temp;
        }
    }
}

int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0;

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

    printf("Elements before swapping are:\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    swapRows(arr,iRow,iCol);

    printf("Elements after swapping are:\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}