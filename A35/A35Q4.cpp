#include<iostream>
using namespace std;

int fact(int iNo)
{
    static int iFact = 1;
    static int i = 1;

    if(i <= iNo)
    {
        iFact *= i;
        i++;
        fact(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    iRet = fact(iValue);

    cout << iRet << endl;

    return 0;
}