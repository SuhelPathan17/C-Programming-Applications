#include<stdio.h>
#include<stdlib.h>

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

int SearchFirstOccurence(PNODE First, int no)
{
    int iCnt = 0;

   /* while(First->data != no)
    {
        iCnt++;
        First = First->next;
    }*/
    
    while(First != NULL)
    {
        iCnt++;
        if(First->data == no)
        {
            break;
        }
        First = First->next;
    }
    if(First == NULL)
    {
        return -1;
    }
    return iCnt ;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);


    printf("Enter Element u want to search\n");
    scanf("%d",&iNo);
    
    iRet = SearchFirstOccurence(Head,iNo); 
    printf("Position of Element is : %d",iRet);

    return 0;
}
