/*
Q5) Accept the number of rows and number of column from user and display below pattern.
Input: iRow=4  iCol=4
Output:
        1   2   3   4   
            2   3   4
                3   4   
                    4
*/
//program layout:

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
int i = 0;
int j = 0;
for(i=1; i <= iRow; i++)
{
  for(j=1; j <= iCol; j++)
  {
    if(j>=i)
    {
    printf("%d\t",j);
    }
    else
    {
    printf(" \t");
    }
  
   }
     printf("\n");
  }


}


int main()
{
int iValue1 = 0,iVAlue2 = 0;

printf("Enter the number of rows and columns");
scanf("%d%d",&iValue1,&iVAlue2);
Pattern(iValue1,iVAlue2);

    return 0;
}