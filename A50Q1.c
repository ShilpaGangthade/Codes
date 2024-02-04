/*Q1-Write a recursive program which accept string from user and count white spaces.
Input : HE llo WOr lD
Output : 3
*/
#include <stdio.h>

int WhiteSpace(char *str)
{
    if (*str == '\0') {
        return 0;
    }

    if (*str == ' ') {
       
        return 1 + WhiteSpace(str + 1);
    } else {
        
        return WhiteSpace(str + 1);
    }
}

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int result = WhiteSpace(inputString);

    printf("Number of white spaces: %d\n", result);

    return 0;
}
