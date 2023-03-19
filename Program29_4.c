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

int SecondLargest(PNODE First)
{
    int iCnt = 0;  
    int iMax = First->data;
    int iMax2 = 0;
    while(First != NULL)
    {
        if(First->data > iMax)
        {
            iMax2 = iMax;
            iMax = First->data;
        }
        First = First->next;
    }
    
    return iMax2;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&Head,110);
    InsertFirst(&Head,230);
    InsertFirst(&Head,320);
    InsertFirst(&Head,240);

    Display(Head);

    iRet = SecondLargest(Head); 
    printf("SecondLargest of all elements is : %d",iRet);

    return 0;
}
