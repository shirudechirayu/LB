#include<iostream>
using namespace std;

typedef unsigned int UINT;

void commonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = 0x00000001;
    int i = 1;

    while(iNo1 != 0 && iNo2 != 0)
    {
        if(((iNo1 & iMask) == iMask) && ((iNo2 & iMask) == iMask))
        {
            printf("%d\t",i);
        }
        i++;
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
    }
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    commonBits(iValue1,iValue2);

    return 0;
}