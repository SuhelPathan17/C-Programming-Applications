#include<stdio.h>
#include<stdbool.h>

bool IsSmall(char ch)
{
    
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = IsSmall(cValue);
    if(bRet == true)
    {
        printf("It is an Small case alphabet.");
    }
    else
    {
        printf("It is not an Small case alphabet.");

    }



    return 0;
}