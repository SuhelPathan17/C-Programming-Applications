#include<stdio.h>

int SumEvenDigit(int iValue)
{
    int iDigit = 0;
    int iSum = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        iValue = iValue/10;
    }

    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iNo);

    iRet = SumEvenDigit(iNo);
    printf("Summation of even digits are : %d",iRet);

    return 0;
}