/*
    Row = 4
    Col = 4

    1   1   1   1
    1   1   1   1
    1   1   1   1
    1   1   1   1
*/




#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0;
    int iCol = 0;

    printf("Enter No. of rows \n");
    scanf("%d",&iRow);
    printf("Enter No. of columns \n");
    scanf("%d",&iCol);

    Pattern(iRow, iCol);

    return 0;
}