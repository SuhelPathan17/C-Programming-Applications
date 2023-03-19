#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;
    
    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
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

    iRet = RangeSumEven(iValue1,iValue2);
    printf("Summation of even elements between given range is : %d",iRet);


    return 0;
}