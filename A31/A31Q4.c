#include<stdio.h>

void strCpyX(char* src, char* dest)
{
    if(src == NULL)
        return;

    while(*src != '\0')
    {
        while(*src != '\0' && *src == ' ')
        {
            src++;
        }
        
        while(*src != ' ' && *src != '\0')
        {
            *dest = *src;
            src++;
            dest++;
        }

        if(*src == ' ')
        {
            *dest = *src;
            dest++;
        }
            
    }

    *dest = '\0';
}

int main()
{
    char arr[30], brr[30];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]",arr);

    strCpyX(arr,brr);

    printf("%s\n",brr);

    return 0;
}
