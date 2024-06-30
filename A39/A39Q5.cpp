#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT toggleBit(UINT iNo, int iPos1, int iPos2)
{
    int i = 0;
    UINT iMask = 0x00000000;

    for(i = iPos1 - 1; i < iPos2; i++)
    {
        iMask |= (1 << i);
    }

    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0;
    int position1 = 0;
    int position2 = 0;
    UINT iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    printf("Enter the position 1:\n");
    scanf("%d",&position1);

    printf("Enter the position 2:\n");
    scanf("%d",&position2);

    iRet = toggleBit(iValue, position1, position2);

    cout << iRet << endl;
}