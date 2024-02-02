/*
Q1) Write a program which displays ASCII table. Table contains symbol, Decimal,Hexadecimal and Octal representation of every member from 0 to 255.
Input: C
Output:Your exam at 9.20 AM

Input: d
Output:Your exam at 10.30 AM
     
*/
//program layout

#include<stdio.h> 

void DisplayASCII()
{

printf("==================ASCII TABLE===============================\n");
printf("dec\thex\toct\tchar\n");

   int i = 0;
   for(i=0;i<127;i++)
   {
    printf("%d\t%x\t%o\t%c\t",i,i,i,i);
      printf("\n");
   }
 
}

int main()
{
DisplayASCII();
    return 0;
} 