#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d \t",Arr[iCnt]);
        }
    }

}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i =0, iRet = 0;

    printf("Enter How Many Elements u want to Eneter :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory:\n");
        return -1;
    }

    printf("Enter Elements :\n");

    for(i = 0; i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr,iLength);
    

    free(ptr);

    return 0;
}