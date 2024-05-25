#include<stdio.h>

int dollarToINR(int iNo)
{
    int result = 0;
    result = iNo*70;
    
    return result;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = dollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return 0;
}