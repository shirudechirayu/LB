#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool chkBit(UINT iNo, int iPos)
{
    UINT iMask = 1 << (iPos - 1);

    if((iNo & iMask) == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    int position = 0;
    bool bRet = false;

    cout << "Enter number :" << endl;
    cin >> iValue;

    cout << "Enter position :" << endl;
    cin >> position;

    bRet = chkBit(iValue,position);

    if(bRet == true)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }

    return 0;
}