#include<stdio.h>

int factorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
            iFactEven *= iCnt;
        else
            iFactOdd *= iCnt;
    }

    return iFactEven - iFactOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = factorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}