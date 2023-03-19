#include<stdio.h>

double SquareMeter(int iNo)
{ 
    double dSMtr = 0.0;
    dSMtr = iNo * 0.0929;
    return dSMtr;
}

int main()
{  
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("%d SquareFeet in SquareMeter is: %lf",iValue,dRet);
    

    return 0;
}