/*Q5) Write a program which accepts file name and one count from user and read that number of character from starting position.

Input: Demo.txt      12
       
Output: Display first 12 charcters from Demo.txt
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFERSIZE 1024

void DisplayN(char FName[], int iSize) 
{
    int fd = open(FName, O_RDONLY);  
    if(fd == -1) 
    {
        printf("Unable to open the file.\n");
        return;
    }

    char Arr[BUFFERSIZE];
    ssize_t iRe;

    while((iRe = read(fd, Arr, sizeof(Arr))) > 0)
     {
        for(int i = 0; i < iSize && i < iRe; i++)
         {
            putchar(Arr[i]);  
        }
    }

    if (iRe == -1)
     {
        printf("Error reading the file.\n");
    }

    close(fd);
}

int main()
 {
    char fileName[30];
    int iSize;

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    printf("Enter the number of characters to display: ");
    scanf("%d", &iSize);

    DisplayN(fileName, iSize);

    return 0;
}