/*Q4). Accepts N numbers from user and accept one another number as No,and display all the element 
from that range.
      
 Input: N: 6
        Start:66
        End:90
        Element:85 66 3 76 93 88
 Output:66 76 88

 Input: N: 6
        Start:30
        End:50
        Element:85 66 3 76 93 88
 Output:
     
 */

 #include<stdio.h>
 #include<stdlib.h>

 void Range(int Arr[], int iLength, int iStart, int iEnd)
 {
    int iCnt = 0;

    for(iCnt=0;iCnt<=iLength;iCnt++)
    {
      if((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd))
    {
      printf("%d\t",Arr[iCnt]);
    }
      
    }
   
 }

 int main()
 {
  int iSize = 0, iRet = 0,iCnt = 0, iValue1 = 0; int iValue2 = 0;
  int *p = NULL;
 

  printf("Enter number of elements : \n ");
  scanf("%d",&iSize);

  printf("Enter the starting point : \n");
  scanf("%d",&iValue1);

  printf("Enter the ending point : \n");
  scanf("%d",&iValue2);

  p = (int *)malloc(iSize*sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate the memory");
    return -1;
  }

  printf("Enter %d elements: \n ",iSize);
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    printf("Enter elements %d :",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
Range(p,iSize,iValue1,iValue2);

free(p);

    return 0;
 }

