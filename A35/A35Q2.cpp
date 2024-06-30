#include<iostream>
using namespace std;

int sum(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum += iNo % 10;
        iNo = iNo / 10;
        sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet= 0;

    cout << "Enter the number" << endl;
    cin >> iValue;

    iRet = sum(iValue);

    cout << iRet << endl;

    return 0;
}