#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;
    
    
    
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if((i % 2) == 0 )
            {
                iNo = (j*2)-1; 
                printf("%d\t",iNo);
                
            }
            else
            {
                printf("%d\t",j*2);
                
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

