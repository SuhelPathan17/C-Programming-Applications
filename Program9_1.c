#include<stdio.h>

void Display(int iNo)
{ 
    for(int iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("* \t");
        }
        else
        {
            printf("# \t");
        }
    }
    
}
int main()
{  
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    

    return 0;
}
/*
#include<stdio.h>

void Display(int iNo)
{ 
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* \t");
    }
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# \t");
    }
}

int main()
{  
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    

    return 0;
}
*/