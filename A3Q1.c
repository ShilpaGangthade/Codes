//Q1. Write a program which accept one number from user and print that number of even numbers on screen
//Input :7
//output: 2 4 6 8 10 12 14 
#include<stdio.h>
int PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return -iNo;
    }
    
    int iCnt = 0;

    for(iCnt=1; iCnt<=(iNo*2); iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main ()
{
 int iValue = 0;
 int iRet = 0;
 
 printf("Enter number\n");
 scanf("%d",&iValue);
 
iRet = PrintEven(iValue);

//printf("%d",iRet);

    return 0;
}