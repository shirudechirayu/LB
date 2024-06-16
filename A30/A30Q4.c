#include<stdio.h>

void strRevToggX(char* src, char* dest)
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
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
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

    strRevToggX(arr,brr);

    printf("%s",brr);

    return 0;
}