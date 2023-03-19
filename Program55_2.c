#include<stdio.h>

int Sum(int iValue)
{
    static int iSum = 0;
    if(iValue != 0)
    {
        iSum = iSum + (iValue % 10);
        iValue = iValue / 10;
        Sum(iValue); 
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iNo);

    iRet = Sum(iNo);
    printf("Addition of Digits is : %d",iRet);
    return 0;
}