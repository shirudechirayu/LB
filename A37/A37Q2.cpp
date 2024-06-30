#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iNo)
{
    UINT mask = 0x00020010;

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
        cout << "5th and 18th bits are ON" << endl;
    }
    else
    {
        cout << "Either both or one of the 5th and 18th bits are OFF" << endl;
    }

    return 0;
}