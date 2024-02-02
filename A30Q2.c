/*Q2. Write a program which displays all elements which are prime from from singly linear
linked list.

Function prototype:
int DisplayPrime(PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output :11 17 41 89
 */

 
#include<stdio.h>
#include<stdlib.h>
#include <math.h>


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

BOOL IsPrime(int num) {
    if (num <= 1) {
        return FALSE;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

void DisplayPrime(PNODE Head) {
    while (Head != NULL) {
        if (IsPrime(Head->Data)) {
            printf("%d ", Head->Data);
        }
        Head = Head->Next;
    }
    printf("\n");
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
DisplayPrime(First);

    return 0;
}
