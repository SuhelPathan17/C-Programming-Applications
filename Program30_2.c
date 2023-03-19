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

void Palindrom(PNODE First)
{
    int iCnt = 0, iDigit = 0, iNo =0, iRev = 0;
    
    printf("Polindrom numbers are:");
    while(First != NULL)
    {
        iNo = First->data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev*10) + iDigit;
            iNo = iNo / 10; 
        }
        if(iRev == First->data)
        {
            printf("%d\t",iRev);
        }
        
        First = First->next;
        iRev = 0;
        iDigit = 0;
        
    }
}
int main()
{
    PNODE Head = NULL;
    int iNo = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);

    Palindrom(Head);
    

    return 0;
}
