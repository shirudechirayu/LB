#include<iostream>
using namespace std;

int min(int iNo)
{
    static int iMin = 9;

    if(iNo != 0)
    {
        if(iMin > iNo % 10)
            iMin = iNo % 10;
        min(iNo/10);
    }

    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number:" << endl;
    cin >> iValue;

    iRet = min(iValue);

    cout << iRet << endl;

    return 0;
}