#include<iostream>
using namespace std;

void display()
{
    static int i = 5;

    if(i >= 1)
    {
        cout << i << "\t";
        i--;
        display();
    }
}

int main()
{
    display();

    return 0;
}