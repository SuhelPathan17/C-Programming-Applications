#include<stdio.h>

int main()
{
    char Name[30];
    printf("Enter full name :\n");
    scanf("%[^\n]s",&Name,&Name);
    printf("Your Name is : %s\n",Name);

    return 0;
}