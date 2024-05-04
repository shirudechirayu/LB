#include<stdio.h>

void display(int iNo){
    
    while(iNo > 0){
        
        printf("*");
        iNo--;
    }
}

int main(){

    int iValue = 0;
    printf("Enter number:\n");

    scanf("%d", &iValue);

    display(iValue);

    return 0;
}