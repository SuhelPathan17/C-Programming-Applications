#include<stdio.h>

int ProductDigits(int iValue)
{
    static int iProduct = 1;
    if(iValue != 0)
    {
        iProduct = iProduct * (iValue % 10);
        iValue = iValue / 10;
        ProductDigits(iValue); 
    }
    return iProduct;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iNo);

    iRet = ProductDigits(iNo);
    printf("Product of Digits is : %d",iRet);
    return 0;
}