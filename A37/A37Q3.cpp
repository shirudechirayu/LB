#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iNo)
{
    UINT mask = 0x08104040;

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
        cout << "All the 7th, 15th, 21st, 28th bits are ON" << endl;
    }
    else
    {
        cout << "Either all or one of the 7th, 15th, 21st, 28th bits are OFF" << endl;
    }

    return 0;
}