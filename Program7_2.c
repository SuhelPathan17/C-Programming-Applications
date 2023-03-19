#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);  // use %2d for padding it by 2 digits
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}