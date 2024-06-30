#include<iostream>
using namespace std;

void display(int iNo)
{
    static int i = 1;
    static char ch = 'A';

    if(i <= iNo)
    {
        cout << ch << "\t";
        i++;
        ch++;
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