/*Q1. Write a program which displays all elements which are perfect from from singly linear
linked list.

Function prototype:
int DisplayPerfect(PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output :6 28
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

BOOL IsPerfect(int num) {
    int sum = 1; // 1 is a divisor for all numbers

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }

    return (sum == num);
}

void DisplayPerfect(PNODE Head)
 {
    while (Head != NULL) {
        if (IsPerfect(Head->Data)) {
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
DisplayPerfect(First);

    return 0;
}
