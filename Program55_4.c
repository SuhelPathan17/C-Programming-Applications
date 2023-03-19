#include<stdio.h>

int Factorial(int iValue)
{
    static int iFact = 1;
    static int iCnt = 1;
    if(iCnt <= iValue)
    {
        iFact = iFact * iCnt;
        iCnt++;
        Factorial(iValue); 
    }
    return iFact;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iNo);

    iRet = Factorial(iNo);
    printf("Factorial is : %d",iRet);
    return 0;
}