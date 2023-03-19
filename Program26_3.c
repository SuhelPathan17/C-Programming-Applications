#include<stdio.h>

void Upper_String(char *str)
{    
   
   char ch = '\0';

   while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            ch = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
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

    Upper_String(Arr);
    
    return 0;
}
