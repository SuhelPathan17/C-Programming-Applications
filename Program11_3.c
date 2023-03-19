#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;
    
    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet= 0;

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);
    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);
    if(iValue1 > iValue2 || iValue1 < 0)
    {
        printf("Invalid Range\n");
        return 0;
    }
    iRet = RangeSum(iValue1,iValue2);
    printf("Summation of elements between given range is : %d",iRet);


    return 0;
}