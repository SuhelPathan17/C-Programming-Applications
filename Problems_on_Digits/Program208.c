#include<stdio.h>

void DisplayFrequency(int iValue)
{
    int iFrequency[10] = {0};
    int iDigit = 0;
    int iTemp = iValue;
    int iCnt = 0;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iFrequency[iDigit]++;
        iTemp = iTemp / 10;
    }

    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        printf("Frequency of %d is %d\n",iCnt,iFrequency[iCnt]);
    }
}

int main()
{
    int iNo = 0;
    

    printf("Please enter number : \n");
    scanf("%d",&iNo);

    DisplayFrequency(iNo);
    

    return 0;
}