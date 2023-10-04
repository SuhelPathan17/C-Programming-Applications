#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[20];
    char *ptr = Arr;

    printf("Enter Full Name : \n");
    scanf("%[^'\n']s",Arr);

    int iLength = strlen(Arr);
    printf("Length of string is: %d\n",iLength);

    while(*ptr != '\0')
    {
        printf("%c\t",*ptr);
        ptr++;
    }
    return 0;
}