#include<stdio.h>

void display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        while(ch <= 90)
        {
            printf("%c\t",ch++);
        }
    }
    else if(ch >= 97 && ch <= 122)
    {
        while(ch >= 97)
        {
            printf("%c\t",ch--);
        }
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