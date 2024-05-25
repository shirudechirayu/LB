#include<stdio.h>

double circleArea(float fRadius)
{
    float PI = 3.14;
    double result = 0.0;

    result = PI * fRadius * fRadius;

    return result;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f",&fValue);

    dRet = circleArea(fValue);

    printf("Area of circle is: %f",dRet);

    return 0;
}