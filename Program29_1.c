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

void Perfect(PNODE First)
{
    int iCnt = 0;
    int iSum = 0;  
    
    printf("Perfect Numbers are:");
    while(First != NULL)
    {
        for(iCnt = 1; iCnt<=(First->data)/2; iCnt++)
        {
            if((First->data)%iCnt == 0)
            {
                iSum = iSum + iCnt; 
            }
        }
        if(iSum == First->data)
        {
            printf("%d\t",First->data);
        }
       
        First = First->next;
        iSum = 0;
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

    Perfect(Head); 
    

    return 0;
}
