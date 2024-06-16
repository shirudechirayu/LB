#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

void strCap(char* str)
{
    if(str == NULL)
        return;

    while(*str != '\0')
    {
        while(*str != '\0' && *str == ' ')
        {
            str++;
        }
        
        BOOL bFlag = FALSE;
        while(*str != ' ' && *str != '\0')
        {
            if(bFlag == FALSE)
            {
                bFlag = TRUE;
                if(*str >= 'a' && *str <= 'z')
                    *str = *str - 32;
            }
                
            str++;
        }
            
    }
}

int main()
{
    char arr[30], brr[30];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]",arr);

    strCap(arr);

    printf("%s\n",arr);

    return 0;
}
