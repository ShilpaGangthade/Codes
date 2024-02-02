/*Q5). Accepts N numbers from user and display the summation of digits of each number.
      
 Input: N: 6
        Element:8225 665 3 76 953 858
 Output:17 17 3 13 17 21 

     
 */
 #include<stdio.h>
 #include<stdlib.h>

 int DigitsSum(int num)
 {
    int sum = 0;
    
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
 }

 int main()
 {
  int iSize = 0; int iRet = 0;int iCnt = 0;
  int *p = NULL;

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
    printf("Enter elements %d :",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
iRet=DigitsSum(p[iCnt]);

free(p);

    return 0;
 }

