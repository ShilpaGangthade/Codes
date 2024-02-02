/*
Q4)Write a program which accept string from user and accept one character. return index of last occurance of that character.
Input: "Marvellous Multi OS"
       M
Output:11
Input: "Marvellous Multi OS"
       w
Output:-1
Input: "Marvellous Multi OS"
       e
Output:4

*/
//program layout

#include<stdio.h> 

int LastChar(char *str,char ch)
{
  int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        iCnt++;
    }
  for(iCnt=(iCnt-1);iCnt>=0;iCnt--)
  {
        if (str[iCnt] == ch)
        {
         return iCnt;
        }
      

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

iRet=LastChar(arr,cValue);
printf("Character location is : %d",iRet);


    return 0;
} 
