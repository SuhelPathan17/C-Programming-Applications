#include<stdio.h>

void Display(int iValue)
{
    static int iCnt = 1;
    if(iCnt <= iValue)
    {
        iCnt++;
        Display(iValue);
        printf("%d\t",--iCnt);
    }
}
int main()
{
    int iNo = 0;
    printf("Enter Number :\n");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}