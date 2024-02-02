/*Q4. Write a program which returns largest element from singly linear
linked list.

Function prototype:
int Maximum(PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output :320
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

int Maximum(PNODE Head, int no )
{
    int i=0;
    int iMax = Head->Data;
    //int iMax1 = 0;
    while(Head!=NULL)
    {
        if(Head->Data>iMax)
        {
     iMax = Head->Data;
        }
 Head=Head->Next;
    }
  
     return iMax;
}
int main()
{
PNODE First = NULL;
int iRet = 0,no=0;
InsertFirst(&First,240);
InsertFirst(&First,320);
InsertFirst(&First,230);
InsertFirst(&First,110);
Display(First);


iRet = Maximum(First,no);
printf("Output :%d\n",iRet);

    return 0;
}
