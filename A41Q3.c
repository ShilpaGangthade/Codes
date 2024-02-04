/*Q3) Write application which accept file name from user and read all data from that file and display contents on screen.
Input: Demo.txt
Output: Display all data of file.
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
char filename[30];
char Arr[100] = {'\0'};
int fd = 0;
int iRet = 0;

printf("Enter the name of file from which you want to display the data:");
scanf("%s",filename);

fd =open(filename,O_RDONLY); 

if(fd == -1)
{
    printf("unable to open the File");

}
else
{
printf("Dispaly All data of the file:");

  while((iRet = read(fd,Arr,sizeof(100))) != 0)
        {
            printf("%s",Arr);      
        }

        close(fd);
    }
    return 0;
}