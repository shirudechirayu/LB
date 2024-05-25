#include<stdio.h>

int rangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0)
    {
        iSum = -1;
        return iSum;
    }

    for(iCnt = iStart; iCnt<= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
            iSum += iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1= 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point\n");
    scanf("%d", &iValue1);

    printf("Enter ending point\n");
    scanf("%d", &iValue2);

    iRet = rangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}