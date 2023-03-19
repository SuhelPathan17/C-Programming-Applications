#include<stdio.h>
#include<stdlib.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL Check(int *Arr, int iSize, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    
    }
    if(iCnt == iSize)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }

}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i =0; 
    int iValue = 0;
    BOOL bRet = 0;

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

    bRet = Check(ptr,iLength,iValue);
    if(bRet == TRUE)
    {
        printf("%d is Present",iValue);
    }
    else
    {
        printf("%d is Absent",iValue);
    }
    
    

    free(ptr);

    return 0;
}