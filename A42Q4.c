/*Q4) Write a program which accepts file name and one character from user and count number of occurance of that character from that file.

Input: Demo.txt      M
       
Output: Frequency of M is 7
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFERSIZE 1024

int CountChar(char FName[], char Ch)
 {
    int fd = open(FName, O_RDONLY);  
    if(fd == -1) {
        printf("Unable to open the file.\n");
        return -1; 
    }

    int iCnt = 0;
    char Arr[BUFFERSIZE];
    int iRe=0;

    while((iRe = read(fd, Arr, sizeof(Arr))) > 0)
     {
        for(int i = 0; i < iRe; i++) 
        {
            if(Arr[i] == Ch)
             {  
                iCnt++;
            }
        }
    }

    if (iRe == -1) {
        printf("Error reading the file.\n");
        return -1;
    }

    close(fd);
    return iCnt;
}

int main() {
    char fileName[30];
    char charName;
    int iRet = 0;

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    printf("Enter the character: ");
    scanf(" %c", &charName);  

    iRet = CountChar(fileName, charName);

    if (iRet != -1)
     {
        printf("Frequency is: %d\n", iRet);
    }

    return 0;
}