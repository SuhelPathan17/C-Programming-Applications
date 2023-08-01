#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(int iValue)
{
    int iDigit = 0;
    iPower = 0;
    int iTemp = iValue;
    int iMult = 1;
    int iSum = 0;

    while(iTemp != 0)
    {
        iPower++;
        iTemp = iTemp / 10;
    }

    iTemp = iValue;

    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        for(int iCnt = 1; iCnt <= iPower; iCnt++)
        {
            iMult = iMult * iDigit;
        }

        iSum = iSum + iMult;
        iMult = 1;
        iTemp = iTemp /10;
    }

    if(iSum ==  iValue)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iNo1 = 0;
    bool bret = false;

    printf("Please enter first number : \n");
    scanf("%d",&iNo1);


    bret = CheckArmstrong(iNo1);
    if(bret == true)
    {
        printf("%d is a Armstrong number\n",iNo1);
    }
    else
    {
        printf("%d and %d are not Armstrong Number\n",iNo1);
    }

    return 0;
}