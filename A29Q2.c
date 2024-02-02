/*Q2. Write a program which search last occurence of particular element from singly linear
linked list.
Function should return position at which element is found

Function prototype:
int SearchLastOcc(PNODE Head, int no);
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element :30
 Output :6
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

int SearchLastOcc(PNODE Head, int no)
{
    int i =1;
     int lastOccurrence = 0;
    for(i=1;Head!=NULL;i++)
    {
       if(Head->Data == no)
       {
        lastOccurrence = i;
       }

     Head=Head->Next;
    }
return lastOccurrence;
}
int main()
{
PNODE First = NULL;
int iRet = 0,no=0;
InsertFirst(&First,70);
InsertFirst(&First,30);
InsertFirst(&First,50);
InsertFirst(&First,40);
InsertFirst(&First,30);
InsertFirst(&First,20);
InsertFirst(&First,10);


Display(First);

printf("Input element: \n");
scanf("%d",&no);

iRet = SearchLastOcc(First, no);
    if (iRet != 0)
    {
        printf("Output: %d\n", iRet);
    }
    else
    {
        printf("Element not found in the linked list.\n");
    }

    return 0;
}
