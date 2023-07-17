#include<stdio.h>

void Reverse(char *str)
{    
   
   int iLength = 0;
   int c, i, j;

    while(*str != '\0')
    {
        iLength++;
        str++;
    }

    for (i = 0, j = iLength - 1; i < j; i++, j--)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    
 
}
int main()
{
    char Arr[20];
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("Modified string is : %s",Arr);
    


    return 0;
}