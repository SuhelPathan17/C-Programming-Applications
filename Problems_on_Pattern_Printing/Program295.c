#include<stdio.h>

/*
    Row = 4
    Col = 4

    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7
*/


void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("%d\t",(iCnt%9)+1);
            iCnt++;
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