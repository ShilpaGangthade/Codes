/*Q5) Accept number of rows and number of columns from user and display below patterns.
Input: iRow = 3  iCol = 4
Output:  1    2     3     4
         5    6     7     8
         9    10    11    12

*/
//Program Layout:

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int n = 1;
    for(i=1;i<=iRow;i++)
    {
        for(j=0;j<=iCol;j++)
        {
            if(i!=j)
            {
                 printf("%d\t",n++);
            }
           
            
        }
        printf("\n");
    }
}

int main()
{
 int iValue1 = 0,iValue2=0;

 printf("Enter the number of rows and columns : ");
 scanf("%d %d",&iValue1,&iValue2);
 
 Pattern(iValue1,iValue2);

    return 0;
}