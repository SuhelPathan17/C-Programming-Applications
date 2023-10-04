#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter Full Name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Welcome %s ",Arr); 
    return 0;
}