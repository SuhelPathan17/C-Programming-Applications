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

int SumEven(PNODE First)
{
    int iCnt = 0;
    int iSum = 0;  
    
    printf("Perfect Numbers are:");
    while(First != NULL)
    {
        if((First->data) % 2 == 0)
        {
            iSum = iSum + (First->data) ;
        }
        First = First->next;    
    }
    return iSum;
    
   
}
int main()
{
    PNODE Head = NULL;
    int iNo = 0;
    int iRet = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);

    iRet = SumEven(Head); 
    printf("Summation of even are : %d",iRet);

    return 0;
}
