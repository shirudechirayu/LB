#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT offBit(UINT iNo)
{
    UINT mask = 0xffffffbf;

    return iNo & mask;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter number:" << endl;
    cin >> iValue;

    iRet = offBit(iValue);

    cout << iRet << endl;

    return 0;
}