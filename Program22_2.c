#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    if(iRow != iCol)
    {
        return;
    }
    int i = 0, j = 0;

    for(i=iRow; i>=1; i--)
    {
        for(j=1; j<=iCol; j++)
        {
            if(i < j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }


}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter no of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter no of columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}

