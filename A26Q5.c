/*
Q5)Write a program which accept string from user and display it in reverse order.
Input: "MarvellouS"
Output: "SuollevraM"
*/
//program layout

#include<stdio.h> 

void Reverse(char *str)
{
    int iCnt = 0;

     while (str[iCnt] != '\0')
    {
        iCnt++;
    }

    for (iCnt = iCnt - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", str[iCnt]);
    }
    printf("\n");
}


int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

Reverse(arr);
    return 0;
} 