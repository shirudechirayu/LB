#include<iostream>
using namespace std;

template<class T>
T multiply(T no1, T no2)
{
    T ans;
    ans = no1*no2;

    return ans;
}

int main()
{
    int iRet = multiply(10,20);
    cout << iRet << endl;

    float fRet = multiply(10.0f,20.0f);
    cout << fRet << endl;

    return 0;
}