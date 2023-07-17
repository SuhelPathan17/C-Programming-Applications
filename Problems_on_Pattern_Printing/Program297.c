#include<stdio.h>
#include<string.h>

/*
    Input : Hello

    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o  

*/


void Pattern(char *Arr)
{
    int iLength = 0;
    char *Brr = Arr; 
    while((*Brr) != '\0')
    {
        iLength++;
        Brr++;
    }


    for(int i=0; i<iLength; i++)
    {
        for(int j=0; j<iLength; j++)
        {
            printf("%c\t",Arr[j]);
        }
        printf("\n");
    }
}

int main()
{
    char str[10];

    printf("Please enter the string :\n");
    scanf("%[^'\n']s",str);

    Pattern(str);

    return 0;
}