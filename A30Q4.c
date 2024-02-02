/*Q4. Write a program which returns second maximum element from singly linear
linked list.

Function prototype:
int AdditionEven(PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output :240
 */

 
#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

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

int SecondMaxElement(PNODE Head) 
{
    int max1 = INT_MIN; // First maximum element
    int max2 = INT_MIN; // Second maximum element

    while (Head != NULL) {
        if (Head->Data > max1) {
            max2 = max1;
            max1 = Head->Data;
        } else if (Head->Data > max2 && Head->Data != max1) {
            max2 = Head->Data;
        }
        Head = Head->Next;
    }

    return max2;
}

int main()
{
PNODE First = NULL;
InsertFirst(&First,240);
InsertFirst(&First,320);
InsertFirst(&First,230);
InsertFirst(&First,110);

int result = SecondMaxElement(First);
    printf("Second maximum element: %d\n", result);
    return 0;
}