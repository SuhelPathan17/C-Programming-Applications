#include<stdio.h>

void TableRev(int iNo)
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt=10; iCnt > 0; iCnt--)
    {
        printf("%d \t",iNo*iCnt); 
    }
}

int main()
{  
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    TableRev(iValue);
    

    return 0;
}