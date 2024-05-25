#include<stdio.h>

double FhToCs(float fTemp)
{
    double result = 0.0;

    result = (fTemp - 32) * 5 / 9;

    return result;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Temperature in Celsius is: %f",dRet);

    return 0;
}