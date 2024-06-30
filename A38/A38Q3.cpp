#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT toggleBit(UINT iNo)
{
    UINT mask = 0x00000040;

    return iNo ^ mask;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter number:" << endl;
    cin >> iValue;

    iRet = toggleBit(iValue);

    cout << iRet << endl;

    return 0;
}