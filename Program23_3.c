#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    
    if((ch >= '0') && (ch <= '9'))
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

    bRet = IsDigit(cValue);
    if(bRet == true)
    {
        printf("It is an Digit.");
    }
    else
    {
        printf("It is not an Digit.");

    }



    return 0;
}