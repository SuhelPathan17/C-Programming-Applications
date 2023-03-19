#include<stdio.h>


int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCnt = iCnt + 1;
        }
        iNo = iNo / 10;
    }   
    return iCnt;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("Count of Odd is : %d",iRet);
    
    return 0;
}