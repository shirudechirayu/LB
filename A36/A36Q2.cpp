#include<iostream>
using namespace std;

int max(int iNo)
{
    static int iMax = 0;

    if(iNo != 0)
    {
        if(iMax < iNo % 10)
            iMax = iNo % 10;
        max(iNo/10);
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number:" << endl;
    cin >> iValue;

    iRet = max(iValue);

    cout << iRet << endl;

    return 0;
}