#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}