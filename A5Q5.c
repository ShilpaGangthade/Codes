//Q4)- Write a program which accept total marks and obtained marks from user and calculate percentage.
/*

Input:1000    745
Output: 74.5%

*/

#include<stdio.h>
float percentage(int iNo1, int iNo2)
{
    float fPer = 0.0f;
    fPer = ((iNo2*100)/iNo1);
    return fPer;
}
int main()
{
int iValue1 = 0,iValue2 = 0;
float fRet = 0.0f;


printf("Please enter total marks\n");
scanf("%d",&iValue1);

printf("Please enter obtained marks\n");
scanf("%d",&iValue2);

fRet= percentage(iValue1, iValue2);

printf("Percentage are %f %\n",fRet);

return 0;
} 