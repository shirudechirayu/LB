#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iNo)
{
    UINT mask = 0x000001c0;

    return (iNo & mask) == mask;
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout << "Enter number:" << endl;
    cin >> iValue;

    bRet = chkBit(iValue);

    if(bRet == true)
    {
        cout << "7th, 8th and 9th bits are ON" << endl;
    }
    else
    {
        cout << "Either all or one of the 7th, 8th and 9th bits are OFF" << endl;
    }

    return 0;
}