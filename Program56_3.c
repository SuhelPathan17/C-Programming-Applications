#include<stdio.h>

int SmallLetters(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if((*str) >= 'a' && (*str) <= 'z')
        {
            iCnt++;
        }
        str++;
        SmallLetters(str); 
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = SmallLetters(Arr);
    printf("Count of SmallLetters is : %d",iRet);
    return 0;
}