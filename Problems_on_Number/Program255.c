#include<stdio.h>


int FactorsMultiplication(int iValue1)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1;(iCnt <= (iValue1/2)); iCnt++)
    {
        if(iValue1 % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iNo1 = 0;
    int iRet = 0;

    printf("Enter First number :\n");
    scanf("%d",&iNo1);

    iRet = FactorsMultiplication(iNo1);
    printf("Multiplication of factors is : %d",iRet);

    return 0;
}