#include<iostream>
using namespace std;

void display()
{
    static char ch = 'A';

    if(ch != 'G')
    {
        cout << ch << "\t";
        ch++;
        display();
    }
}

int main()
{
    display();

    return 0;
}