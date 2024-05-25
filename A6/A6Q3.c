#include<stdio.h>

int factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = iNo;
    }

    int iCnt = 0;
    int result = 1;

    for(iCnt = 2; iCnt <= iNo; iCnt++)
    {
        result *= iCnt;
    }

    return result;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}