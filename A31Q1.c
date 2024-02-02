/*Q1. Write a program which reverse each element from singly linear
linked list.

Function prototype:
void Reverse(PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output :|11|->|82|->|71|->|14|->|6|->|98|
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
    newn ->Next = (*Head);
    *Head = newn;
}
}

void DisplayList(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

void Reverse(PNODE Head)
{
    int digit, reversed;

    while (Head != NULL)
    {
        int num = Head->Data;
        reversed = 0;

        while (num != 0)
        {
            digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        Head->Data = reversed;
        Head = Head->Next;
    }
}

int main()
{
PNODE First = NULL;
InsertFirst(&First,89);
InsertFirst(&First,6);
InsertFirst(&First,41);
InsertFirst(&First,17);
InsertFirst(&First,28);
InsertFirst(&First,11);
DisplayList(First);

Reverse(First);

    printf("Linked list after reversing each element:\n");
    DisplayList(First);

    return 0;
}