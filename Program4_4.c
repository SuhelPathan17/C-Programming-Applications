#include<stdio.h>
int SumNonFact(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of Non factors is : %d",iRet);
    return 0;
}