#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        ch1 = 'A';
        ch2 = 'a';
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
                printf("%c\t",ch1++);
            else
                printf("%c\t",ch2++);
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