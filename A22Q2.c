/*
Q2) Accept the number of rows and number of column from user and display below pattern.
Input: iRow=4   iCol=4
Output:
          *     *      *       *
          *     *      *
          *     * 
          *
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
   if((i==1)||(j==1)||((i==2)&&(j==2))||((i==2)&&(j==3))||((i==3)&&(j==2)))
   {
    printf("*\t");
   }
   else
   {
    printf(" \t");
   }

  }printf("\n");

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