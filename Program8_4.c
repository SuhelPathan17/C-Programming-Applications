#include<stdio.h>

void Table(int iNo)
{ 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt=1; iCnt < 11; iCnt++)
    {
        printf("%d \t",iNo*iCnt); 
    }
}

int main()
{  
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Table(iValue);
    

    return 0;
}