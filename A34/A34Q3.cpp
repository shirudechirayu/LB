#include<iostream>
using namespace std;

void display(int iNo)
{
    static int i = iNo;

    if(i >= 1)
    {
        cout << i << "\t";
        i--;
        display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number" << endl;
    cin >> iValue;

    display(iValue);

    return 0;
}