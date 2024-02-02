/*Q2). Accepts N numbers from user and return the Smallest number
      
 Input: N: 6
        Element:85 66 3 66 93 88
 Output:3
     
 */
 #include<stdio.h>
 #include<stdlib.h>
 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;

 int Minimum(int Arr[], int iLength)
 {
    int iCnt = 0;
    int iNo= Arr[0];

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
      if(Arr[iCnt]<=iNo)
      {
        iNo=Arr[iCnt];
      }
    }
    return iNo;
  
 }

 int main()
 {
  int iSize = 0; int iRet = 0;int iValue = 0;
  int *p = NULL;int iCnt=0;
  BOOL bRet = FALSE;

  printf("Enter number of elements\n");
  scanf("%d",&iSize);

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
  iRet = Minimum(p, iSize);

  printf("Smallest numeber is %d",iRet);

free(p);

    return 0;
 }

