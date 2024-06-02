#include<stdio.h>

void display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        printf("%c\n",ch + 32);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("%c\n",ch - 32);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    display(cValue);

    return 0;
}