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

int Summation(PNODE First)
{
    int iCnt = 0;  
    int iSum = 0;
    while(First != NULL)
    {
        iSum = iSum + First->data;
        First = First->next;
    }
    
    return iSum;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&Head,101);
    InsertFirst(&Head,101);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    iRet = Summation(Head); 
    printf("Summation of all elements are : %d",iRet);

    return 0;
}
