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

int SearchLastOccurence(PNODE First, int no)
{
    int iCnt = 0;  
    int iPos = 0;
    while(First != NULL)
    {
        iCnt++;
        if(First->data == no)
        {
            iPos = iCnt;
        }
        First = First->next;
    }
    
    if(iPos == 0)
    {
        return -1;
    }
    else
    { 
        return iPos;
    }
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


    printf("Enter Element u want to search\n");
    scanf("%d",&iNo);
    
    iRet = SearchLastOccurence(Head,iNo); 
    printf("Position of Element is : %d",iRet);

    return 0;
}
