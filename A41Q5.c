/*Q5) Write application which accept file name from user and one string from user. Write that string at the end of file.
Input: Demo.txt
       Hello World
Output: write Hello World at the end of Demo.txt
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char filename[30];
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    
    int fd = open(filename, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
        return 1; 
    }
    else
    {
    
    printf("Enter the string that you want to write into the file :\n");
    scanf(" %[^'\n']s",Arr);

      iRet = write(fd,Arr,strlen(Arr));
      
    printf("Hello world written successfully at the end of file");
    }
    close(fd);

    return 0;
}