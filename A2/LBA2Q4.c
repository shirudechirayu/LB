#include<stdio.h>

void display(int iNo, int frequency){

    int iCnt = 0;
    for(iCnt = 1; iCnt <= frequency; iCnt++){
        printf("%d ", iNo);
    }
}

int main(){

    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    printf("Enter frequency:\n");
    scanf("%d", &iCount);

    display(iValue, iCount);

    return 0;
}