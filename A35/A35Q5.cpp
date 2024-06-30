#include<iostream>
using namespace std;

int mult(int iNo)
{
    static int iMult = 1;

    if(iNo != 0)
    {
        iMult *= (iNo % 10);
        mult(iNo/10);
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number:" << endl;
    cin >> iValue;

    iRet = mult(iValue);

    cout << iRet << endl;

    return 0;
}