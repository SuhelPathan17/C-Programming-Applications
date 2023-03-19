#include<stdio.h>
#include<stdbool.h>

bool Special_Symbol(char ch)
{
    
    if((ch >= '!') && (ch <= '*'))
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

    bRet = Special_Symbol(cValue);
    if(bRet == true)
    {
        printf("It is a Special Symbol.");
    }
    else
    {
        printf("It is not  a Special Symbol.");

    }

    return 0;
}