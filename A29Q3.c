/*Q3. Write a program which returns addition of all element from singly linear
linked list.

Function prototype:
int Addition(PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output :100
 */
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
int Data;
struct node *Next;

};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

 void InsertFirst(PPNODE Head, int no)
{
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));

newn->Next= NULL;
newn->Data = no;


if(*Head == NULL)
{
    *Head = newn;
}
else 
{
    newn ->Next = *Head;
    *Head = newn;
}
}
void Display(PNODE Head)
{ 
    printf("content of linked list :\n");
    while(Head !=  NULL)
    {    
        printf("| %d |->",Head->Data);
        Head=Head->Next;

    }printf("NULL\n");
}

int Addition(PNODE Head, int no )
{
    int i=0;
    int iSum = 0;
    for(i=0;Head!=NULL;i++)
    {
    iSum = iSum + Head->Data;
    Head=Head->Next;
    } 
     return iSum;
}
int main()
{
PNODE First = NULL;
int iRet = 0,no=0;
InsertFirst(&First,40);
InsertFirst(&First,30);
InsertFirst(&First,20);
InsertFirst(&First,10);
Display(First);


iRet = Addition(First,no);
printf("Output :%d\n",iRet);

    return 0;
}
