#include<stdio.h>
#include<stdlib.h>


int Check_Number_Index(int *Arr, int iSize, int iNo)
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
    
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i =0; 
    int iRet = 0;
    int iValue = 0;

    printf("Enter How Many Elements u want to Eneter :\n");
    scanf("%d",&iLength);

    printf("Enter Number for search:\n");
    scanf("%d",&iValue);

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

    iRet = Check_Number_Index(ptr,iLength,iValue);
    printf("Index of Last occurence of %d is : %d",iValue,iRet);
    
    
    

    free(ptr);

    return 0;
}