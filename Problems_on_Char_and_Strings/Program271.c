#include<stdio.h>
#include<string.h>


int SmallCount(char *ptr)
{
    int iCnt = 0;
    while(*ptr != '\0')
    {
        if((*ptr) >= 'a' && (*ptr) <= 'z')
        {
            iCnt++;
        }
        ptr++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    char *ptr = Arr;
    int iRet = 0;

    printf("Enter Full Name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = SmallCount(Arr);
    printf("Small count is : %d\n",iRet);
    
    return 0;
}