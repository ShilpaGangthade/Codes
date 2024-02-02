/*
Q3)Write a program which accept string from user and return difference between frequency of small character and frequency of capital character.
Input: "MarvellouS"
Output: 6(8-2)
*/
//program layout

#include<stdio.h> 

int Difference(char *str)
{

    int iCntcap = 0;
    int iCntsmall = 0;
    int iCnt=0;

    while(*str !='\0')
    {
   
     if((*str>='A')&&(*str<='Z'))
     {
        iCntcap= iCntcap+1;
        str++;
     }
    else if((*str>='a')&&(*str<='z'))
     {
        iCntsmall= iCntsmall+1;
        str++;
     }
 
     iCnt = iCntsmall-iCntcap;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

iRet = Difference(arr);
printf("%d",iRet);
    return 0;
} 