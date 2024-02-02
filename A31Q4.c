/*Q4. Write a program which display  smallest digits of all element from singly linear
linked list.

Function prototype:
void DisplaySmall(PNODE Head);
Input linked list : |11|->|250|->|532|->|415|
Output :1 0 2 1
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

int GetSmallestDigit(int num)
{
    int smallest = 9;

    while (num != 0)
    {
        int digit = num % 10;
        if (digit < smallest)
        {
            smallest = digit;
        }
        num /= 10;
    }

    return smallest;
}

void DisplaySmall(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d ", GetSmallestDigit(Head->Data));
        Head = Head->Next;
    }
    printf("\n");
}


int main()
{
PNODE First = NULL;
InsertFirst(&First,415);
InsertFirst(&First,532);
InsertFirst(&First,250);
InsertFirst(&First,11);
printf("Original linked list:\n");
    DisplayList(First);

    printf("Smallest digit of each element:\n");
    DisplaySmall(First);
    return 0;
}