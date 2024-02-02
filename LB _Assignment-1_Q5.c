// Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\n",iCnt);
    }
}
int main()
{
    int ivalue = 0;
    int iValue = 5;

    Accept(iValue);
    return 0;
}