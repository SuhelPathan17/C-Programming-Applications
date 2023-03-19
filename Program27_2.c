#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;

}
int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character u want to search: \n");
    scanf(" %c",&cValue);

    bRet = CheckCharacter(Arr,cValue);
    if (bRet == true)
    {
        printf("Character is present.");
    }
    else
    {
        printf("Character is not present.");
    }

    return 0;
}