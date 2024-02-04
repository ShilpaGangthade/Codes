/* Q4-Write a recursive program which accept number from user and return smallest digit
Input : 87983
Output : 3
*/

#include <stdio.h>

int Min(int iNo)
{
    static int iMin = 9;

    if (iNo > 0)
    {
        int iDigit = iNo % 10;
        if (iDigit < iMin)
        {
            iMin = iDigit;
        }

        Min(iNo / 10);
    }

    return iMin;
}

int main()
{
    int iValue;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    int iResult = Min(iValue);

    printf("The smallest digit is: %d\n", iResult);

    return 0;
}
