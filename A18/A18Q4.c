#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(iCol + 1 - j == i || i == 1 || j == 1 || i == iRow || j == iCol)
                printf("*\t");
            else if(iCol + 1 - j > i)
                printf("#\t");
            else
                printf("$\t");
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);
}