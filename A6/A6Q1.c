#include<stdio.h>

void number(int iNo)
{
    if(iNo < 50)
    {
        printf("small\n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("medium\n");
    }
    else
    {
        printf("large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    number(iValue);

    return 0;
}