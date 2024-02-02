//Q1)-Write a program which accept number from user and return the count of even digits.
/*

Input : 2395
Output : 1

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 4

*/

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
     int iSum = 0;

    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;

        if((iDigit%2)==0)
        {
            iSum=iSum+1;
        }

    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet =CountEven(iValue);
    
    printf("%d",iRet);

    return 0;
}