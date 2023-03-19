#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str); 
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);
    printf("Count of white spaces is : %d",iRet);
    return 0;
}