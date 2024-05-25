#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iDigit = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iDigit);
            iDigit = (iDigit % 9) + 1;
            if(iDigit == 0)
            {
                iDigit++;
            }
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

    return 0;
}