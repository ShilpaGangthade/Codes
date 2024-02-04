/* Q4-Write a recursive program which display below pattern.
Input: 6
Output: A   B   C   D   E   F
*/

#include<stdio.h>
void Display(int iNo)
{
    static int iCnt = 0;
    if(iCnt<iNo)
    {
        printf("%c\t", 'A' + iCnt);
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

