#include<stdio.h>

int Reverse(int iValue)
{
    static int iRev = 0;
    int iDigit = 0;
    if(iValue != 0)
    {
        iDigit = iValue % 10;
        iRev = (iRev*10) + iDigit;
        iValue = iValue/10;
        Reverse(iValue);
    }
    return iRev;

}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iNo);

    iRet = Reverse(iNo);
    printf("Reverse is : %d",iRet);
    return 0;
}