/* Q4-Write a recursive program which accept a number from user and return its factorial.
Input: 5
Output: 120
*/
#include<stdio.h>
int Factorial(int iNo)
{
    static int iCnt = 1;
    static int iFact = 1;

    if(iCnt <=iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        FactorialR(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet=0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number  : %d\n",iRet);
    return 0;
}