#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double Area = PI * fRadius * fRadius;
    return Area;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is : %lf",dRet);

    return 0;
}