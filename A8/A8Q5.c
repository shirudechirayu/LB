#include<stdio.h>

double squareMeter(int iValue)
{
    double result = 0.0;
    result = iValue * 0.0929;

    return result;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d",&iValue);

    dRet = squareMeter(iValue);

    printf("Area in square meter is: %f",dRet);

    return 0;
}