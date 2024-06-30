#include<iostream>
using namespace std;

void display()
{
    static int i = 1;

    if(i <= 5)
    {
        cout << "*\t";
        i++;
        display();
    }
}

int main()
{
    display();

    return 0;
}