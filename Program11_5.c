#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }
    for(int iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d \t",iCnt);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);
    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);
    

    RangeDisplayRev(iValue1,iValue2);


    return 0;
}