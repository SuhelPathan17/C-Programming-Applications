#include<stdio.h>

int Factorial(int iValue)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Please enter the number :\n");
    scanf("%d",&iNo);

    iRet = Factorial(iNo);
    printf("Factorial of %d is : %d",iNo,iRet);

    return 0;
}