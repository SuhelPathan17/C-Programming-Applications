#include<stdio.h>

void MaxFrequency(int iValue)
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

    int iMaxDigit = 0;
    int iMaxFrequency = 0;

    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        if(iFrequency[iCnt] > iMaxFrequency)
        {
            iMaxFrequency = iFrequency[iCnt];
            iMaxDigit = iCnt;
        }
    }

    printf(" %d is occured at Maximum times and it's frequency is %d\n",iCnt,iMaxFrequency);
}

int main()
{
    int iNo = 0;
    

    printf("Please enter number : \n");
    scanf("%d",&iNo);

    MaxFrequency(iNo);
    

    return 0;
}