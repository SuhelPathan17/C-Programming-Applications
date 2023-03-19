#include<stdio.h>

void Lower_String(char *str)
{    
   
   char ch = '\0';

   while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            ch = *str + 32;
        }
        else
        {
            ch = *str;
        }
        printf("%c",ch);
        str++;
    }

}
int main()
{
    char Arr[20];
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    Lower_String(Arr);
    
    return 0;
}
