#include<stdio.h>

void pattern(char* str)
{
    int iLength = 0, i = 0,j = 0;
    char* temp = str;

    while(*temp != '\0')
    {
        iLength++;
        temp++;
    }

    for(i = 0; i < iLength; i++)
    {
        for(j = 0; j < iLength; j++)
        {
            if(str[j] >= 'A' && str[j] <= 'Z')
                printf("%c ",str[j] + 32);
            else
                printf("%c ",str[j]);
        }
        printf("\n");
    }
}

int main()
{
    char arr[30];

    printf("Enter the string:\n");
    scanf("%[^'\n]s",arr);

    pattern(arr);

    return 0;
}