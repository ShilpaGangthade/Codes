// Q1)- Accept N numbers from user and return dfferences between summation of even elements and summation of odd elements.
/*

Input : N: 6
Elements : 85  6  3  80  93  88
Output : 53  (174-181)

*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iNo)
{
    int iCnt = 0;
    int iSumE = 0;
    int iSumO = 0;

    for(iCnt=0; iCnt<iNo; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iSumE=iSumE+Arr[iCnt];
        }
        else 
        {
            iSumO=iSumO + Arr[iCnt];
        }
    }
    return (iSumE - iSumO);
}

int main()
{
    int iSize = 0, iRet =0, iCnt = 0;
    int *p = NULL; 

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d :\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
}