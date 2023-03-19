#include<stdio.h>

int Count_Small(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = Count_Small(Arr);
    printf("No. of small letters are : %d",iRet);


    return 0;
}