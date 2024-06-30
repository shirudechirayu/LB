#include<iostream>
using namespace std;

int strLenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        strLenX(str);
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    cout << "Enter the string" << endl;
    cin.getline(arr,20);

    iRet = strLenX(arr);

    cout << iRet << endl;

    return 0;
}