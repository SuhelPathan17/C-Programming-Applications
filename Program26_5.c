#include<stdio.h>

int White_Spaces(char *str)
{    
   int iCnt = 0;

   while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = White_Spaces(Arr);
    printf("White spaces are : %d",iRet);
    
    return 0;
}
