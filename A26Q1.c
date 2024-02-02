/*
Q1)Write a program which accept string from user and count the number of capital character.
Input: "Marvellous Multi OS"
Output:4
*/
//program layout

#include<stdio.h> 

int CountCapital(char *str)
{

    int iCnt = 0;
    while(*str !='\0')

    {
     if((*str>='A')&&(*str<='Z'))
     {
        iCnt= iCnt+1;
     }
str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

iRet = CountCapital(arr);
printf("%d",iRet);
    return 0;
} 