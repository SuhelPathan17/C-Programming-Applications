#include<stdio.h>
void DisplayConvert(char CValue)
{
    if( CValue >= 65 && CValue<= 90)
    {
        char LowerCase = CValue + 32;
        printf("%c",LowerCase);
    }    
    else
    {
        char UpperCase = CValue - 32;
        printf("%c",UpperCase);
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}