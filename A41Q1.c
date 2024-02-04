/*Q1) Write application which accept file name from user and open that file in read mode.
Input: Demo.txt
Output: File opened successfully.
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
char filename[30];
int fd = 0;

printf("Enter the name of file that you want to open:");
scanf("%s",filename);

fd =open(filename,O_RDONLY); 

if(fd == -1)
{
    printf("unable to open the File");

}
else
{
printf("File opened successfully");
}

    return 0;
}