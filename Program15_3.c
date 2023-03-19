#include<stdio.h>
#include<stdlib.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL Check_Number(int *Arr, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    BOOL bRet = 0;

    printf("Enter How Many Elements u want to Eneter :\n");
    scanf("%d",&iLength);

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

    bRet = Check_Number(ptr,iLength);
    if(bRet == TRUE)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Absent");
    }
    
    

    free(ptr);

    return 0;
}