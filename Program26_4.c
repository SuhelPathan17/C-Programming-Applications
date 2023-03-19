#include<stdio.h>

void Digit_In_String(char *str)
{    
   

   while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }

}
int main()
{
    char Arr[20];
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    Digit_In_String(Arr);
    
    return 0;
}
