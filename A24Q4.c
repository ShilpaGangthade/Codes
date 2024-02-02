/*
Q4) Accept the Character from user and check whether it is small case or not(a-z).
Input: g
Output:TRUE

Input: D
Output:FALSE
     
*/
//program layout

#include<stdio.h> 
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
{
    return TRUE;
}
else
{
    return FALSE;
}
   
}

int main()
{
char cValue = '\0';
BOOL bRet = FALSE;

printf("Enter the Character");
scanf("%c",&cValue);

bRet=ChkSmall(cValue);

if (bRet==TRUE)
{
    printf("It is Small case character");
}
else
{
    printf("It is not a Small case character");
}

    return 0;
} 