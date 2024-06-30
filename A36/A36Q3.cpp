#include<iostream>
using namespace std;

int small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
            iCount++;
        str++;
        small(str);
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    cout << "Enter the string" << endl;
    cin.getline(arr,20);

    iRet = small(arr);

    cout << iRet << endl;

    return 0;
}