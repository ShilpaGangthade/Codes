//Accept one number from user and print that number of * on screen.
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iNo > 0)
    {
        printf("*\n",iCnt);
        iNo --;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}