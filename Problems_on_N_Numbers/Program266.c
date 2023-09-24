#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Accept(int *Arr, int iLength)
{
    printf("Enter the elements inside array: \n");
    
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
}

void Display(int *Arr, int iLength)
{
    printf("Elements inside array are :\n");
    
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

bool CheckPalindrome(int *Arr, int iLength)
{
    int iCnt = 0;
    int iStart = 0;
    int iEnd = iLength-1;
    bool bflag = true;

    while(iStart < iEnd)
    {
        if(Arr[iStart] != Arr[iEnd])
        {
            bflag = false;
            break;
        }
        iStart++;
        iEnd--;
    }

    return bflag;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array: \n");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    Accept(ptr,iSize);
    Display(ptr,iSize);

    bool bRet = CheckPalindrome(ptr,iSize);
    if(bRet == true)
    {
        printf("Array is palindrome\n");
    }
    else
    {
        printf("Array is not palindrome\n");
    }
    return 0;
}