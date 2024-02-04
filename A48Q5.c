/* Q5-Write a recursive program which display below pattern.
Input: 6
Output: a   b   c   d   e   f
*/

#include<stdio.h>
void Display(int iNo)
{
    static int iCnt = 0;
    if(iCnt<iNo)
    {
        printf("%c\t", 'a' + iCnt);
        iCnt++;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

