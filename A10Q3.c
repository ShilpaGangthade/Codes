// Q3)- Write a program which accept range from user and and return addition of all numbers in between that range.
//(Range shoulc contains positive numbers only)
/*

Input : 23   35
Output : 212

Input : 10  18
Output : 126

Input : 10  -2
Output : Invalid range

Input : 90  18
Output : Invalid range

*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
     int iCnt = 0;
     int iSum = 0;

    if((iStart < 0) || (iEnd <0) || (iStart> iEnd))
    {
        printf("Invalid range");
    }

    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        iSum=iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 =0, iRet = 0;

    printf("Enter starting point\n");
    scanf("%d", &iValue1);

    printf("Enter ending point\n");
    scanf("%d", &iValue2);

    iRet =RangeSum(iValue1,iValue2);

    printf("Addition is %d", iRet);

    return 0;
}