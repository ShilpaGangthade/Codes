/*
Q3) Accept character from user .if it is capital then display all the characters from the input characters till Z.if it is small then print
all the character in recerse order till a. in other cases return directly.
capital. in other cases disply as it is.
Input: Q
Output:  Q  R   S   T   U   V   W   X   Y   Z

Input: m
Output:m    n   o   p   q   r   s   t   u   v   w   x   y   z

Input: 8
Output:
     
*/
//program layout

#include<stdio.h> 

void Display(char ch)
{

    if((ch>='A')&&(ch<='Z'))
    {
        char c = ch;
    for(c==ch ;c<='Z';c++)

      printf("%c\t",c);
    }
    else if((ch>='a')&&(ch<='z'))
    {
       char c = ch;
    for(c==ch ;c<='z';c++)

      printf("%c\t",c);     
    }
    else 
    {
    printf(" \n");
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