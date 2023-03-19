#include<stdio.h>

void Display()
{
    static int iCnt = 'a';
    if(iCnt <= 'f')
    {
        printf("%c\t",iCnt);
        iCnt++;
        Display();
    }
   
}
int main()
{

    Display();
    return 0;
}