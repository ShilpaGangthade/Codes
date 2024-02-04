/* Q2-Write a recursive program which accept number from user and return largest digit
Input : 87983
Output : 9
*/

#include <stdio.h>

int Max(int iNo)
{
    static int iMax = 0;

    if (iNo > 0)
    {
        int iDigit = iNo % 10;
        if (iDigit > iMax)
        {
            iMax = iDigit;
        }

        Max(iNo / 10);
    }

    return iMax;
}

int main()
{
    int iValue;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    int iResult = Max(iValue);

    printf("The largest digit is: %d\n", iResult);

    return 0;
}
