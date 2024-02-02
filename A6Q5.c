//Q5)- Write a program which accepts N from user and print first 5 multiples of N
/*

Input:4
Output:4 8 12 16 20

*/

#include<stdio.h>

void MultiplyDisplay(int iNo)
{
    int iCnt = 0;
    int im = 0;

    for(iCnt=1 ; iCnt<=(5*iNo); iCnt++)
    {
        if((iCnt % iNo)== 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}
int main()
{
int iValue = 0;

printf("Enter number\n");
scanf("%d",&iValue);

MultiplyDisplay(iValue);

return 0;
} 