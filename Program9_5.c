#include<stdio.h>

int FactorialDiff(int iNo)
{ 
    int iCnt = 0;
    int Fact1 = 1;
    int Fact2 = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 == 0)
        {  
            Fact1 = Fact1 * iCnt;
        }
        else
        {
            Fact2 = Fact2 * iCnt;
        }
    }

    return Fact1 - Fact2;
    
}

int main()
{  
    int iValue = 0,iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Difference of Factorial is: %d",iRet);
    

    return 0;
}