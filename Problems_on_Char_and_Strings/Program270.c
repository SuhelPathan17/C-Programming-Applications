#include<stdio.h>
#include<string.h>


void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\t",*str);
        str++;
    }
}
int main()
{
    char Arr[20];
    char *ptr = Arr;

    printf("Enter Full Name : \n");
    scanf("%[^'\n']s",Arr);

    int iLength = strlen(Arr);
    printf("Length of string is: %d\n",iLength);

    Display(Arr);
    
    return 0;
}