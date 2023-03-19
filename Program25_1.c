#include<stdio.h>

int Count_Capital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Count_Capital(Arr);
    printf("No. of Capital letters are : %d",iRet);


    return 0;
}