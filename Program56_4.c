#include<stdio.h>

int LargestDigit(int iValue)
{
    static int iMin = 9;
    int iDigit = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    if(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iValue = iValue / 10;
        LargestDigit(iValue);
    }
    return iMin;
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