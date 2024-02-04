/*Q1) Write a program which accepts file name from user and count number of capital characters from that file.

Input: Demo.txt
       
Output: Number of capital character are 23
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFERSIZE 1024

int CountCapital(char FName[])
 {
    int fd = open(FName, O_RDONLY);  
    if(fd == -1)
     {
        printf("Unable to open the file.\n");
        return -1; 
    }

    int iCnt = 0;
    char Arr[BUFFERSIZE];
    int iRe=0;

    while((iRe = read(fd, Arr, sizeof(Arr))) > 0) {
        for(int i = 0; i < iRe; i++) {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z')) {
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
    int iRet = 0;

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    iRet = CountCapital(fileName);

    if (iRet != -1) 
    {
        printf("Number of capital characters are %d\n", iRet);
    }

    return 0;
}