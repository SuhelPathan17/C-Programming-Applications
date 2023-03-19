#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    

    for(iCnt = 2; iCnt<=iNo*2; iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
        
    }


}

int main()
{
    int iValue = 0;
    printf("Enter Value :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

