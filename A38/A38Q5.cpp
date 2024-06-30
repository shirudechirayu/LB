#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT onBit(UINT iNo)
{
    UINT mask = 0x0000000f;

    return iNo | mask;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter number:" << endl;
    cin >> iValue;

    iRet = onBit(iValue);

    cout << iRet << endl;

    return 0;
}