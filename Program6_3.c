#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;
    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    bRet = ChkGreater(iValue1,iValue2);
    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}
