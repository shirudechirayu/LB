#include<stdio.h>

int KMToMeter(int iNo)
{
    int result = 0;
    result = iNo * 1000;

    return result;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance:\n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Value in meters is: %d meters",iRet);

    return 0;
}