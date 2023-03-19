#include<stdio.h>

void MultipleDisplay(int iNo)
{
    for(int iCnt = 1; iCnt<=5;iCnt++)
    {
        printf("%d \t",iNo*iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
