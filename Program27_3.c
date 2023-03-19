#include<stdio.h>


int CheckIndex(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCnt++;
        str++;
    }
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
    

}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character u want to search: \n");
    scanf(" %c",&cValue);

    iRet = CheckIndex(Arr,cValue);
    printf("Index is : %d",iRet);

    return 0;
}