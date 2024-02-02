/*Q3). Accepts N numbers from user and accept one another number as No,return index of last 
        occurrence of that No.
 Input: N: 6
        No:66
        Element:85 66 3 66 93 88
 Output:3

 Input: N: 6
        No:93
        Element:85 66 3 66 93 88
 Output:4

Input: N: 6
        No:12
        Element:85 11 3 15 11 111
 Output:-1
 */

 #include<stdio.h>
 #include<stdlib.h>

 int LastOcc(int Arr[], int iLength, int iNo)
 {
    int iCnt = 0;

    for(iCnt=(iLength-1);iCnt<iLength;iCnt--)
    {
      if(Arr[iCnt]==iNo)
      {
        return iCnt;
      }
    }
 }

 int main()
 {
  int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
  int *p = NULL;
 

  printf("Enter number of elements\n");
  scanf("%d",&iSize);
  printf("Enter the number : \n");
  scanf("%d",&iValue);

  p = (int *)malloc(iSize*sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate the memory");
    return -1;
  }

  printf("Enter %d elements\n",iSize);
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    printf("Enter elements %d : ",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
iRet = LastOcc(p, iSize,iValue);
if(iRet == -1)
{
    printf("There is no such number\n");
}
else
{
    printf("\nLast occurrence of number is %d",iRet);
}
free(p);

    return 0;
 }

