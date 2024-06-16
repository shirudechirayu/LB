#include<stdio.h>

void strCpyRev(char* dest, char* src)
{
    int iCnt = 0;

    while(*src != '\0')
    {
        src++;
        iCnt++;
    }

    src--;

    while(iCnt != 0)
    {
        *dest = *src;
        dest++;
        src--;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30], brr[30];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    strCpyRev(brr,arr);

    printf("%s",brr);

    return 0;
}