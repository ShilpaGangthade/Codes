/*
Q5)Write a program which accept string from user and count the number of white spaces.
Input: "marve89llous121"
Output: 89121

Input: "MarvellouS"
Output: 0

Input: "MarvellouS Infosystem"
Output: 1
Input: "MarvellouS Infosystems by  piyush Manohar khairnar"
Output: 5
*/
//program layout

#include<stdio.h> 

int CountWhite (char *str)
{
 int iCnt=0;
     while (*str != '\0')
    {
        if((*str ==' '))
        {
            iCnt++;
        }
        str++;
    }return iCnt;
}


int main()
{
    char arr[20];
   int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

 iRet = CountWhite(arr);
 printf("%d",iRet);
 
    return 0;
} 