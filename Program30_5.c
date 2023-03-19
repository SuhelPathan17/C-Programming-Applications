#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no; 
    newn->next = NULL; 

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements Inside LikedList are:\n");
    while(First != NULL)
    {
        printf("| %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL \n");
}

void DisplayLargest(PNODE First)
{
    int iCnt = 0, iDigit = 0, iNo = 0, iMax = 0;
    
    while(First != NULL)
    {
        iNo = First->data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 9)
            {
                iMax = iDigit;
                break;
            }
            else if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10; 
        }
        printf("%d\t",iMax);
        
        First = First->next;
        iMax = 0;
        iDigit = 0;
        
    }
}
int main()
{
    PNODE Head = NULL;
    int iNo = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,200);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);

    DisplayLargest(Head); 
    

    return 0;
}
