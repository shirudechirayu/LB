#include<stdio.h>

double rectArea(float fWidth, float fHeight)
{
    double result = 0.0;
    result = fWidth * fHeight;

    return result;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width:\n");
    scanf("%f", &fValue1);

    printf("Enter height:\n");
    scanf("%f",&fValue2);

    dRet = rectArea(fValue1,fValue2);

    printf("Area of rectangle is: %f",dRet);

    return 0;
}