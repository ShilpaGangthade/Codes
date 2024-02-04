/* Q3-Write a recursive program which accept string from user and count number of characters.
Input: Hello
Output: 5
*/

#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        Strlen(str);
    }
    
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String\n");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("%d",iRet);

    return 0;
}

