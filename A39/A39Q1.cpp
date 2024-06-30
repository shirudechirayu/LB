#include<iostream>
using namespace std;

typedef unsigned int UINT;

int countOne(UINT iNo)
{
    UINT mask = 0x00000001;
    int iCount = 0;

    while(iNo != 0)
    {
        if(iNo & mask == mask)
            iCount++;

        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout << "Enter number:" << endl;
    cin >> iValue;

    iRet = countOne(iValue);

    cout << iRet << endl;

    return 0;
}