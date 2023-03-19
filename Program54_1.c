#include<stdio.h>

void Display(int iValue)
{
    static int iCnt = 0;
    if(iCnt < iValue)
    {
        printf("*\t");
        iCnt++;
        Display(iValue);
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