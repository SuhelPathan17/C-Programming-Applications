#include<stdio.h>

void Display(int iValue)
{
    static int iCnt = 'A';
    if(iCnt < ('A'+iValue))
    {
        printf("%c\t",iCnt);
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