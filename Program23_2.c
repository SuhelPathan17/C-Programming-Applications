#include<stdio.h>
#include<stdbool.h>

bool IsCapital(char ch)
{
    
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = IsCapital(cValue);
    if(bRet == true)
    {
        printf("It is an Capital alphabet.");
    }
    else
    {
        printf("It is not an Capital alphabet.");

    }



    return 0;
}