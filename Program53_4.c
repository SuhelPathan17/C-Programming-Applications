#include<stdio.h>

void Display()
{
    static int iCnt = 'A';
    if(iCnt <= 'F')
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