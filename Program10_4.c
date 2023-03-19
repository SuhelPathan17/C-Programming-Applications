#include<stdio.h>


double FhToCs(float fTemp)
{
    double dCelsius = (fTemp - 32)*(5/(double)9);
    return dCelsius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temp in Ferhanait :");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);
    printf("Celsius is : %lf",dRet);

    return 0;
}