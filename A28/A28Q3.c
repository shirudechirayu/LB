#include<stdio.h>

void strCpyCap(char* dest, char* src)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }    
        src++; 
    }

    *dest = '\0';
}

int main()
{
    char arr[30], brr[30];

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    strCpyCap(brr,arr);

    printf("Destination string is: %s\n",brr);

    return 0;
}