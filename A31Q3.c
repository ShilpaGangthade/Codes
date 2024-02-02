/*Q3. Write a program which display product of all element from singly linear
linked list.(Don't consider 0)

Function prototype:
void DisplayProduct(PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output :1 2 6 4 
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

void DisplayProduct(PNODE Head)
{
    long long product = 1; // Using long long to handle large products

    while (Head != NULL)
    {
        if (Head->Data != 0)
        {
            product *= Head->Data;
            printf("%lld ", product);
        }
        else
        {
            printf("0 ");
        }
        Head = Head->Next;
    }
    printf("\n");
}


int main()
{
PNODE First = NULL;
InsertFirst(&First,41);
InsertFirst(&First,32);
InsertFirst(&First,20);
InsertFirst(&First,11);

printf("Original linked list:\n");
    DisplayList(First);

    printf("Product of non-zero elements:\n");
    DisplayProduct(First);
    return 0;
}