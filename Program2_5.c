#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == TRUE)
    {
        printf("It is an Even Number");
    }
    else
    {
        printf("It is an odd Number");
    }


    return 0;
}