#include<iostream>
using namespace std;

int reverse(int iNo)
{
    static int iResult = 0;

    if(iNo != 0)
    {
        iResult *= 10;
        iResult += iNo % 10; 
        reverse(iNo/10);
    }

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number:" << endl;
    cin >> iValue;

    iRet = reverse(iValue);

    cout << iRet << endl;

    return 0;
}