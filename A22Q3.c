/*
Q3) Accept the number of rows and number of column from user and display below pattern.
Input: iRow=5   iCol=5
Output:
        $   *   *   *   *
        #   $   *   *   *
        #   #   $   *   *
        #   #   #   $   *
        #   #   #   #   $
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
   if((i==j))
   {
    printf("$\t");
   }
   
   else if(i>j)
   {
    printf("#\t");
   }
   else
   {
    printf("*\t");
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