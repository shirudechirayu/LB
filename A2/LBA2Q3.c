#include<stdio.h>

void display(int iNo){
    
    if(iNo < 10){
        printf("Hello");
    }
    else{
        printf("Demo");
    }
}

int main(){

    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    display(iValue);

    return 0;
}