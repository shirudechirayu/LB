#include<stdio.h>

void strCpySmall(char* dest, char* src)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
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

    strCpySmall(brr,arr);

    printf("Destination string is: %s\n",brr);

    return 0;
}