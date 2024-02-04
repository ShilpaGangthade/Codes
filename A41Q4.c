/*Q4) Write application which accept file name from user and display size of file.
Input: Demo.txt
Output: File size is 56 bytes.
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
char filename[30];
char Arr[100] = {'\0'};
int iSize =0;
int fd = 0;
int iRet = 0;

printf("Enter the name of file:");
scanf("%s",filename);

fd =open(filename,O_RDONLY); 

if(fd == -1)
{
    printf("unable to open the File");

}
else
{

  while((iRet = read(fd,Arr,sizeof(100))) != 0)
        {
             iSize = iSize +iRet;
           
        }
        printf("File Size is %d bytes\n",iSize);    
        close(fd);
    }
    return 0;
}