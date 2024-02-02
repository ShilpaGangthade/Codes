/*Q5. Write a program which display largest digits of all element from singly linear
linked list.

Function prototype:
void DisplayLarge(PNODE Head);
Input linked list : |11|->|250|->|532|->|415|
Output :1 5 5 9
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

int GetLargestDigit(int num)
{
    int largest = 0;

    while (num != 0)
    {
        int digit = num % 10;
        if (digit > largest)
        {
            largest = digit;
        }
        num /= 10;
    }

    return largest;
}

void DisplayLarge(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d ", GetLargestDigit(Head->Data));
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

    printf("Largest digit of each element:\n");
    DisplayLarge(First);

    return 0;
}