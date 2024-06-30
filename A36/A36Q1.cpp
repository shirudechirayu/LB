#include<iostream>
using namespace std;

int whiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
            iCount++;
        str++;
        whiteSpace(str);
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    cout << "Enter the string" << endl;
    cin.getline(arr,20);

    iRet = whiteSpace(arr);

    cout << iRet << endl;

    return 0;
}