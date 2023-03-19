#include<stdio.h>

int Difference(char *str)
{
    int iCntL = 0, iCntS = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntL++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCntS++;
        }
        str++;
    }
    return (iCntS - iCntL);
}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);
    printf("Difference is : %d",iRet);


    return 0;
}