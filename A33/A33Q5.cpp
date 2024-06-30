#include<iostream>
using namespace std;

void display()
{
    static char ch = 'a';

    if(ch != 'g')
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