#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("_________________________________________________\n");
    printf("ASCII table\n");
    printf("_________________________________________________\n");
    
    printf("Symbol\t Decimal\t Hex \t Octal");

    for(i = 0; i <=255; i++)
    {
        printf("%c\t  %d\t  %x\t  %o\n",i,i,i,i);
    }

    printf("\n_________________________________________________\n");

}
int main()
{
    DisplayASCII();

    return 0;
}