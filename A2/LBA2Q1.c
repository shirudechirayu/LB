#include<stdio.h>

void display(int iNo){
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iNo){
        printf("*");
        iCnt++;
    }
}

int main(){

    int iValue = 0;
    printf("Enter number:\n");

    scanf("%d", &iValue);

    display(iValue);

    return 0;
}