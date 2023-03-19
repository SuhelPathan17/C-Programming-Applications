#include<stdio.h>


int CheckLastIndex(char *str, char ch)
{
    int iCnt = 0;
    int iOccurence =0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iOccurence = iCnt;
        }
        iCnt++;
        str++;
    }
    
    if(iOccurence == 0)
    {
        return -1;
    }
    else
    {
        return iOccurence;
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

    iRet = CheckLastIndex(Arr,cValue);
    printf("Index is : %d",iRet);

    return 0;
}