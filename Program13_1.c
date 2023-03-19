#include<stdio.h>


int CountEven(int iNo)
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
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("Count of Even is : %d",iRet);
    
    return 0;
}