#include<stdio.h>
#include<string.h>


int DigitCount(char *ptr)
{
    int iCnt = 0;
    while(*ptr != '\0')
    {
        if((*ptr) >= '0' && (*ptr) <= '9')
        {
            iCnt++;
        }
        ptr++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    char *ptr = Arr;
    int iRet = 0;

    printf("Enter Full Name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = DigitCount(Arr);
    printf("Digit count is : %d\n",iRet);
    
    return 0;
}