#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iNo)
{
    UINT mask = 0x00004000;

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
        cout << "15th bit is ON" << endl;
    }
    else
    {
        cout << "15th bit is OFF" << endl;
    }

    return 0;
}