#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return true;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);
    if(bRet == true)
    {
        printf("It is an alphabet.");
    }
    else
    {
        printf("It is not an alphabet.");

    }



    return 0;
}