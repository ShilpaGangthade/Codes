/*
Q5) Accept the number of rows and number of columns from user and display below pattern.
Input: iRow=5  iCol=5
Output:
      1     2   3   4   5
      1     2           5
      1         3       5
      1             4   5
      1     2   3   4   5
*/
//program layout

#include<stdio.h> 
void Pattern(int iRow,int iCol)
{
int i = 0;
int j = 0;
for(i=1; i <= iRow; i++)
{
  for(j=1; j <= iCol; j++)
  {
   if((i==j)||(i==1)||(i==iRow))
   {
     printf("%d\t",j);
   }
   else if(j==1)
   {
    printf("1\t");
   }
   else if(j==iCol)
   {
    printf("5\t");
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