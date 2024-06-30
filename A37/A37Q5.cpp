#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iNo)
{
    UINT mask = 0x80000001;

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
        cout << "First and last bits are ON" << endl;
    }
    else
    {
        cout << "Either both or one of the first and last bits are OFF" << endl;
    }

    return 0;
}