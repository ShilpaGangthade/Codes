//Q5)- Write a program which returns difference between Even factorial and odd factorial.
/*
Input : 5/-5
Output : -7  (8 - 15)

Input : 10
Output : 2895   (3840-945)
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iFactEven = 1;
    int iFactOdd = 1;
    int iFactDiff = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1; iCnt<= iNo; iCnt++)                            
    {
        if((iCnt % 2)== 0)
        {
            iFactEven = iFactEven * iCnt;
        }
    }
    for(iCnt=1; iCnt<= iNo; iCnt++)                            
    {
        if((iCnt % 2)!= 0)
        {
            iFactOdd = iFactOdd * iCnt;
        }
    }

    iFactDiff = iFactEven - iFactOdd;

    return iFactDiff;
}

int main()
{
    int iValue, iRet =0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}