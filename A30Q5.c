/*Q5. Write a program which display addition of digits of element from singly linear
linked list.

Function prototype:
int AdditionEven(PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output :2 5 2 6 10
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

void DisplayDigitSum(PNODE Head) 
{
    while (Head != NULL) {
        int num = Head->Data;
        int sum = 0;

        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        printf("%d ", sum);
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
PNODE First = NULL;
InsertFirst(&First,640);
InsertFirst(&First,240);
InsertFirst(&First,20);
InsertFirst(&First,230);
InsertFirst(&First,110);

DisplayDigitSum(First);

    return 0;
}