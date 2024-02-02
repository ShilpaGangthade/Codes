/*
Q2) Accept character from user . if character is small display its corresponding capital character, and if it is capital then display its corresponding
small. in other cases disply as it is.
Input: Q
Output:q

Input: m
Output:M

Input: %
Output:%
     
*/
//program layout

#include<stdio.h> 

void Display(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
      printf("%c\n",ch+32);
    }
    else if((ch>='a')&&(ch<='z'))
    {
             printf("%c\n",ch-32); 
    }
    else 
    {
    printf("%c\n",ch);
    }
  
 
}

int main()
{
char cValue='\0';
printf("Enter the character");
scanf("%c",&cValue);

Display(cValue);
    return 0;
} 