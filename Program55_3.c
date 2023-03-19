#include<stdio.h>

int Count(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        iCnt++;
        str++;
        Count(str); 
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%s",Arr);

    iRet = Count(Arr);
    printf("Count is : %d",iRet);
    return 0;
}