#include<stdio.h>


void Display(char ch)
{
    printf("Decimal :%d\n",ch);
    printf("Hexadecimal :%x\n",ch);
    printf("Octal :%o\n",ch);
}

int main()
{
    char cValue = '\0';
    

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}