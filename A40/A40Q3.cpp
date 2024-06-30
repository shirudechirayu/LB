#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT onBit(UINT iNo, int iPos)
{
    UINT iMask = 1 << (iPos - 1);

    return iNo | iMask;
}

int main()
{
    UINT iValue = 0;
    int position = 0;
    UINT iRet = 0;

    cout << "Enter number :" << endl;
    cin >> iValue;

    cout << "Enter position :" << endl;
    cin >> position;

    iRet = onBit(iValue,position);

    cout << iRet << endl;
    return 0;
}