/*Q2. Write a program which display all palindrome elements of singly linear
linked list.

Function prototype:
void DisplayPallimdrome(PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414
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

void DisplayList(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

BOOL IsPalindrome(int num)
{
    int original = num;
    int reversed = 0;

    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

void DisplayPalindrome(PNODE Head)
{
    while (Head != NULL)
    {
        if (IsPalindrome(Head->Data))
        {
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
InsertFirst(&First,414);
InsertFirst(&First,17);
InsertFirst(&First,28);
InsertFirst(&First,11);
printf("Original linked list:\n");
    DisplayList(First);

    printf("Palindrome elements:\n");
    DisplayPalindrome(First);

    return 0;
}