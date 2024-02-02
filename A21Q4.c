/*Q4) Accept number of rows and number of columns from user and display below patterns.
Input: iRow = 6 iCol = 5

Output:   *    *    *    *    *  
          *    @    @    @    *     
          *    @    @    @    *  
          *    @    @    @    *  
          *    *    *    *    *
*/
//Program Layout:

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i =0;
    int j =0;
    
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i==1)||(j==1) || (i==6) || (j==5))
            {
                 printf("*\t");
            }
            else
            {
                 printf("@\t");
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