/*Q5- Write a program which accept number from user and return its reverse number.
Input : 523
Output : 325
*/
#include <stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;

    if (iNo != 0)
    {
        int iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;

        Reverse(iNo / 10);
    }

    return iRev;
}

int main()
{
    int iValue;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    int iResult = Reverse(iValue);

    printf("The reversed number is: %d\n", iResult);

    return 0;
}
