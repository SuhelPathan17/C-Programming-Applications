#include<stdio.h>

int OddFactorial(int iNo)
{ 
    int iCnt = 0;
    int Fact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 != 0)
        {  
            Fact = Fact * iCnt;
        }
    }
    return Fact;
    
}

int main()
{  
    int iValue = 0,iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial is: %d",iRet);
    

    return 0;
}