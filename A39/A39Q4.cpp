#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);

    if(((iNo & iMask1) == iMask1) || ((iNo & iMask2) == iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    int position1 = 0;
    int position2 = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    printf("Enter the position 1:\n");
    scanf("%d",&position1);

    printf("Enter the position 2:\n");
    scanf("%d",&position2);

    bRet = chkBit(iValue, position1, position2);

    if(bRet == true)
    {
        printf("Either %d or %d bit is ON\n",position1,position2);
    }
    else
    {
        printf("Both %d and %d bits are OFF\n",position1,position2);
    }
}