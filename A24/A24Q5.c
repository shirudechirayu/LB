#include<stdio.h>

void display(char ch)
{
    printf("Decimal\t\t%d\nOctal\t\t0%o\nHexaDecimal\t0X%x\n",ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    display(cValue);

    return 0;
}