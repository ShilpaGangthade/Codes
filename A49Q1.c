/* Q1-Write a recursive program which display below pattern.
Input: 5
Output: 5   4   3   2   1
*/

#include<stdio.h>
void Display(int iNo)
{
    static int iCnt = 1;
    if(iCnt<=iNo)
    {
        printf("%d\t*\t", iNo - iCnt + 1);
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

