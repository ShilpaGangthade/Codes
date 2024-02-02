/*
Q1)Write a program which accept string from user and accept one character .check whether that character is present or not.
Input: "Marvellous Multi OS"
       e
Output:TRUE
Input: "Marvellous Multi OS"
       w
Output:FALSE

*/
//program layout

#include<stdio.h> 
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkChar(char *str,char ch)
{
     while(*str !='\0')
     {
    if(*str == ch)
    {
    return TRUE;
    }
   str++;
     } 
     
    return FALSE;
}

int main()
{
char arr[20];
char cValue;
BOOL bRet = FALSE;

printf("Enter string");
scanf("%[^'\n']s",arr);

printf("Enter the character");
scanf(" %c",&cValue);

bRet=ChkChar(arr,cValue);

if (bRet==TRUE)
{
    printf("Character found");
}
else
{
    printf("Character not found");
}

    return 0;
} 
