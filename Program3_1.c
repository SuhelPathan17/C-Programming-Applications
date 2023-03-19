#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int New = iNo * 2;
    if(iNo <= 0)
    {
        return;
    }
    else
    {
        for(iCnt = 1; iCnt<=(New);iCnt++)
        {
            if((iCnt%2 == 0))
            {
                printf("%d \t",iCnt);
            }
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}