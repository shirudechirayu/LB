#include<iostream>
using namespace std;

template<class T>
void display(T value, int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout << value << "\t";
    }
    cout << endl;
}

int main()
{
    int iValue = 0, iFreq = 0;
    float fValue = 0.0f;
    char cValue = '\0';

    cout << "Enter the integer" << endl;
    cin >> iValue;
    cout << "Enter the frequency" << endl;
    cin >> iFreq;
    display(iValue,iFreq);

    cout << "Enter the floating point number" << endl;
    cin >> fValue;
    cout << "Enter the frequency" << endl;
    cin >> iFreq;
    display(fValue,iFreq);

    cout << "Enter the character" << endl;
    cin >> cValue;
    cout << "Enter the frequency" << endl;
    cin >> iFreq;
    display(cValue,iFreq);

    return 0;
}