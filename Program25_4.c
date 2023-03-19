#include<stdio.h>
#include<stdbool.h>

bool Check_Vowels(char *str)
{
    int iCntL = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') )
        {
            bFlag = true;
            break;
        }
        else if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') )
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
    bool bRet = false;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = Check_Vowels(Arr);
    if(bRet == true)
    {
        printf("vowels exists");
    }
    else
    {
        printf("vowels does not exists");
    }



    return 0;
}