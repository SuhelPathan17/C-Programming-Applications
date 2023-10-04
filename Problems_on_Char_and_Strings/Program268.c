#include<stdio.h>

int main()
{
    char Arr[20];
    char *ptr = Arr;

    printf("Enter Full Name : \n");
    scanf("%[^'\n']s",Arr);

    int iCnt = 0;
    while(*ptr != '\0')
    {
        iCnt++;
        ptr++;
        
    }

    printf("Length of string is: %d\n",iCnt);
    return 0;
}