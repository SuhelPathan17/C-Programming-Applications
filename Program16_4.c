#include<stdio.h>
#include<stdlib.h>


void Check_Number_Range(int *Arr, int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    
    }
    
    
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i =0; 
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter How Many Elements u want to Eneter :\n");
    scanf("%d",&iLength);

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);

    ptr = (int*)malloc(iLength*sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory:\n");
        return -1;
    }

    printf("Enter Elements :\n");

    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Check_Number_Range(ptr,iLength,iValue1,iValue2);
    
    
    
    

    free(ptr);

    return 0;
}