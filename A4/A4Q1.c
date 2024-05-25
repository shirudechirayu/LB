#include<stdio.h>

int multFact(int iNo)
{
    int iCnt = 0;
    int mult = 1;

    if(iNo == 0)
    {
        return 0;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            mult *= iCnt;
        }
    }

    return mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = multFact(iValue);

    printf("%d",iRet);

    return 0;
}