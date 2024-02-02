// Write a program which accept number from user and display below pattern.
/*

Input:5 / -5
Output:*   *   *   *  *  #  #   #  #   # 

*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=0; iCnt<iNo; iCnt++)
    {
        printf("*\t",iCnt);
    }
    for(iCnt=0; iCnt<iNo; iCnt++)
    {
        printf("#\t",iCnt);
    }
}

int main()
{
    int iValue =0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}



