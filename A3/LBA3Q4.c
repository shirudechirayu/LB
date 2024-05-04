#include<stdio.h>

void displayConvert(char cValue){

    if(cValue >= 'A' && cValue<='Z'){

        printf("%c", cValue + 32);
    }
    else{

        printf("%c", cValue - 32);
    }
}

int main(){

    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    displayConvert(cValue);

    return 0;
}