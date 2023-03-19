#include<stdio.h>
#include<stdlib.h>

int Even_Frequency(int *Arr, int iSize)
{
    int iCnt = 0, iFrequency = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;

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

    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Even_Frequency(ptr,iLength);
    printf("Frequency of Even No. is : %d",iRet);
    

    free(ptr);

    return 0;
}