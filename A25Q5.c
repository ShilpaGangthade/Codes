/*
Q5)Accept character from user and display its ASCII value in decimal octal and hexadecimal formal
Input: A
Output:Decimal : 65
       Octal : 0101
       Hexadecimal : oX41
     
*/
//program layout

#include<stdio.h> 

void Display(char ch)
{
printf("Decimal : %d\nOctal :%o\nHexadecimal : %x",ch,ch,ch);
}

int main()
{
    char cValue='\0';
    printf("Enter the character");
    scanf("%c",&cValue);

Display(cValue);
    return 0;
} 