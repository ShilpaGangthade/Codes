/*Q1) Accept number of rows and number of columns from user and display below patterns.
Input: iRow = 4  iCol =4
Output:  A   B   C   D
         A   B   C   D
         A   B   C   D
         A   B   C   D

*/
//Program Layout:

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='A';j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
 int iValue1 = 0,iValue2=0;

 printf("Enter the number of rows and columns :");
 scanf("%d %d",&iValue1,&iValue2);
 
 Pattern(iValue1,iValue2);

    return 0;
}