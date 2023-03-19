#include<stdio.h>

void Reverse_String(char *str)
{  
    int iLength = 0;
    int i = 0;
    int j = 0;

    while(str[i] != '\0')
        {
            iLength++;
            i++;
        }

    for(j = iLength-1; j>=0; j--)
        {
            printf("%c",*(str+j));
        
        }
 
}
int main()
{
    char Arr[20];
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    Reverse_String(Arr);
    


    return 0;
}