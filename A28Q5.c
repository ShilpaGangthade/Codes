/*
Q5)Write a program which accept string from user and reverse that string.
Input: "abcd"
Output:"dcba"

Input: "abba"
Output:"abba"

*/
//program layout

#include<stdio.h> 

char StrRevX(char *str)
{
  int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        iCnt++;
    }
  for(iCnt=(iCnt-1);iCnt>=0;iCnt--)
  {
    printf("%c",str[iCnt]);
     }

}

int main()
{
char arr[20];
char cRet = '\0';

printf("Enter string");
scanf("%[^'\n']s",arr);

cRet = StrRevX(arr);

    return 0;
} 
