#include<stdio.h>

int factDiff(int iNo)
{
    int iCnt = 0;
    int sum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            sum += iCnt;
        }
        else
        {
            sum -= iCnt;
        }
    }

    return sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = factDiff(iValue);

    printf("%d",iRet);

    return 0;
}