#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(int iValue1, int iValue2)
{
    int iFrequency1[10] = {0};
    int iFrequency2[10] = {0};
    int iDigit = 0;
    int iCnt = 0;
    bool bFlag = true;

    while(iValue1 != 0)
    {
        iDigit = iValue1 % 10;
        iFrequency1[iDigit]++;
        iValue1 = iValue1 / 10;
    }

    iDigit = 0;

    while(iValue2 != 0)
    {
        iDigit = iValue2 % 10;
        iFrequency2[iDigit]++;
        iValue2 = iValue2 / 10;
    }

    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        if(iFrequency1[iCnt] != iFrequency2[iCnt])
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;

}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    bool bret = false;

    printf("Please enter first number : \n");
    scanf("%d",&iNo1);

    printf("Please enter second number : \n");
    scanf("%d",&iNo2);

    bret = CheckAnagram(iNo1,iNo2);
    if(bret == true)
    {
        printf("%d and %d are anagram\n",iNo1,iNo2);
    }
    else
    {
        printf("%d and %d are not anagram\n",iNo1,iNo2);
    }

    return 0;
}