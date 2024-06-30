#include<iostream>
using namespace std;

void display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout << i <<"\t*\t";
        i++;
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