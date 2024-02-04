/*Q2) Write application which accept file name from user and create that file in read mode.
Input: Demo.txt
Output: File Created successfully.
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
char filename[30];
int fd = 0;

printf("Enter the name of file that you want to create:");
scanf("%s",filename);

fd =creat(filename,O_RDONLY); 

if(fd == -1)
{
    printf("unable to create the File");

}
else
{
printf("File created successfully");
}

    return 0;
}