#include<stdio.h>
  
void EvenFactorsDisplay(int iNo)
{
    int iCnt = 0;

    printf("Even factors are as follows :\n");
    for(iCnt = 2; iCnt <= (iNo/2); iCnt=iCnt+2)
    {
        if((iNo % iCnt == 0))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    EvenFactorsDisplay(iValue);

    return 0;
}