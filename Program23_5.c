#include<stdio.h>


void DisplaySchedule(char ch)
{
    
    if((ch >= 'a') && (ch <= 'd'))
    {
        if(ch == 'a')
        {
            printf("Your Time is 7:00 AM\n");
        }
        else if(ch == 'b')
        {
            printf("Your Time is 8:30 AM\n");
        }
        else if(ch == 'c')
        {
            printf("Your Time is 9:20 AM\n");
        }
        else if(ch == 'd')
        {
            printf("Your Time is 10:30 AM\n");
        }
    }
    else if((ch >= 'A') && (ch <= 'D'))
    {
        if(ch == 'A')
        {
            printf("Your Time is 7:00 AM\n");
        }
        else if(ch == 'B')
        {
            printf("Your Time is 8:30 AM\n");
        }
        else if(ch == 'C')
        {
            printf("Your Time is 9:20 AM\n");
        }
        else if(ch == 'D')
        {
            printf("Your Time is 10:30 AM\n");
        }   
    }
}

int main()
{
    char cValue = '\0';
    

    printf("Enter Your Division :\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}