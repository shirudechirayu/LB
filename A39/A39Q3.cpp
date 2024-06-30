#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iNo)
{
    UINT iMask1 = 0x00000100;
    UINT iMask2 = 0x00000800;

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
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = chkBit(iValue);

    if(bRet == true)
    {
        printf("Either 9th or 12th bit is ON\n");
    }
    else
    {
        printf("Both 9th and 12th bits are OFF\n");
    }
}