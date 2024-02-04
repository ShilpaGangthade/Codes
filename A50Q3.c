/*Q3- Write a recursive program which accept string from user and count number of small characters.
Input : HElloWOrlD
Output : 5
*/

#include <stdio.h>

int Small(char *str)
{
    static int count = 0;

    if (*str == '\0') {
        return count;
    }

    if (*str >= 'a' && *str <= 'z') {
        count++;
    }

    return Small(str + 1);
}

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int result = Small(inputString);

    printf("Number of small characters: %d\n", result);

    return 0;
}
