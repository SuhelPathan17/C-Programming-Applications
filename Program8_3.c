#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
    
}

int main()
{  
    int iValue = 0, iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is  : %d",iRet);

    return 0;
}