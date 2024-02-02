/*
Q3)Write a program which accept string from user and accept one character. and return index of first occurance of that character.
Input: "Marvellous Multi OS"
       M
Output:0
Input: "Marvellous Multi OS"
       w
Output:-1
Input: "Marvellous Multi OS"
       e
Output:4

*/
//program layout

#include<stdio.h> 

int FirstChar(char *str,char ch)
{
  int iCnt=0;
     while(str[iCnt] !='\0')
     {
    if(str[iCnt] == ch)
    {
    return iCnt;
    }
    iCnt++;

     } return -1;
}

int main()
{
char arr[20];
char cValue;
int iRet = 0;

printf("Enter string");
scanf("%[^'\n']s",arr);

printf("Enter the character");
scanf(" %c",&cValue);

iRet=FirstChar(arr,cValue);
printf("Character location is : %d",iRet);


    return 0;
} 
