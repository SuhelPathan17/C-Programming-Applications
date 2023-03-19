#include<stdio.h>


int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }   
    return iSum1 - iSum2;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference is : %d",iRet);
    
    return 0;
}