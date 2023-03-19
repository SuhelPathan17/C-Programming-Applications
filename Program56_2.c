#include<stdio.h>

int LargestDigit(int iValue)
{
    static int iMax = 0;
    int iDigit = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    if(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iValue = iValue / 10;
        LargestDigit(iValue);
    }
    return iMax;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iNo);

    iRet = LargestDigit(iNo);
    printf("Largest Digit is : %d",iRet);
    return 0;
}