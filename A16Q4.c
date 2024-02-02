/*Q4). Accepts N numbers from user and display all such numbers which contains 3 digits in it.
      
 Input: N: 6
        Element:8225 665 3 76 953 858
 Output:665 953 858

     
 */
 #include<stdio.h>
 #include<stdlib.h>

 void Digits(int Arr[], int iLength)
 {
   int iCnt=0;
   
   for(iCnt=0; iCnt<iLength; iCnt++)
   {
     if((Arr[iCnt]>=100) && (Arr[iCnt]<=999))
     {
      printf("%d\t",Arr[iCnt]);
     }
   }
 }

 int main()
 {
  int iSize = 0; int iRet = 0;int iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements : ");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize*sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate the memory");
    return -1;
  }

  printf("Enter %d elements :\n",iSize);
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    printf("Enter elements %d :",iCnt+1);
    scanf("%d",&p[iCnt]);
  }

 Digits(p,iSize);

free(p);

    return 0;
 }

