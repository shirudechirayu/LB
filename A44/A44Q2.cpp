#include<iostream>
using namespace std;

template<class T>
T max(T no1, T no2,T no3)
{
    T max = no1;
    if(no2 > max)
    {
        max = no2;
    }

    if(no3 > max)
    {
        max = no3;
    }

    return max;
}

int main()
{
    int iRet = max(20,40,10);
    cout << iRet << endl;

    float fRet = max(20.0f,30.0f,10.0f);
    cout << fRet << endl;

    return 0;
} 