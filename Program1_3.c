#include<stdio.h>

void Display()
{
 int i = 0;
 i =5;
 for(i = 5; i>=1; i = i - 2 )
 {
    printf("%d\n",i);
    i++;
 }   
}
int main()
{
    Display();
    return 0;
}
