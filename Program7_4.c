#include<stdio.h>

void OddDisplay(int iNo)
{
    for(int iCnt = 1; iCnt<=iNo; iCnt=iCnt+2)
    {
        printf("%d \t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
