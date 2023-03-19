#include<stdio.h>


double RectArea(float fHeight, float fWidth)
{
    double Area = fHeight * fWidth;
    return Area;
}
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Height :\n");
    scanf("%f",&fValue1);

    printf("Enter Width :\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of Rectangle is : %lf",dRet);

    return 0;
}