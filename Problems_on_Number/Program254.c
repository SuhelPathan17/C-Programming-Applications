#include<stdio.h>


void DisplayCommonFactors(int iValue1, int iValue2)
{
    int iCnt = 0;
    printf("Common factors are :\n");
    
    for(iCnt = 1;(iCnt <= (iValue1/2)) && (iCnt <= (iValue2/2)); iCnt++)
    {
        if((iValue1 % iCnt == 0) && (iValue2 % 2 == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter First number :\n");
    scanf("%d",&iNo1);

    printf("Enter Second number :\n");
    scanf("%d",&iNo2);

    DisplayCommonFactors(iNo1,iNo2);

    return 0;
}