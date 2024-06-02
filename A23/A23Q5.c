#include<stdio.h>

void displaySchedule(char ch)
{
    switch(ch)
    {
        case 'A':
        case 'a':
            printf("Your exam is at 7 AM\n");
            break;

        case 'B':
        case 'b':
            printf("Your exam is at 8.30 AM\n");
            break;

        case 'C':
        case 'c':
            printf("Your exam is at 9.20 AM\n");
            break;

        case 'D':
        case 'd':
            printf("Your exam is at 10.30 AM\n");
            break;

        default:
            printf("Wrong division entered\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    displaySchedule(cValue);

    return 0;
}