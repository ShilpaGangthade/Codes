/*
Q5) Accept division of student from user and depends on the division display exam timing. There are 4 division in school as A,B,C,D.
 Exam of division A at 7 AM,B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.(Application should be case sensitive)

Input: C
Output:Your exam at 9.20 AM

Input: d
Output:Your exam at 10.30 AM
     
*/
//program layout

#include<stdio.h> 
#define TRUE 1
#define FALSE 0
typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
     {
       printf("Your exam at 7 AM");
     }
   else if(chDiv == 'B')
   {
    printf("Your exam at 8.30 AM");
   }
   else if(chDiv == 'C')
   {
    printf("Your exam at 9.20 AM");
   }
   else if(chDiv == 'D')
   {
    printf("Your exam at 10.30 AM");
   }
   
}

int main()
{
char cValue = '\0';

printf("Enter your Division");
scanf("%c",&cValue);

DisplaySchedule(cValue);

    return 0;
} 