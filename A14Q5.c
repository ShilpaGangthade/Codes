// Accept N numbers from user and accept one another number as NO,return frequency of NO from it.
/*

Input : N : 6
        NO :66
        Elements : 85   66  3   66  93  88
Output : 2

Input : N : 6
        NO :12
        Elements : 85   66  3   6  93  88
Output : 0

*/
//Program Layout :

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iValue,int iNo)
{
    int iCnt=0;
    int iFreq = 0;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreq=iFreq+1;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iRet =0, iCnt = 0;int iN=0;
    int *p = NULL;

    printf("Enter number of elements :\t");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enter element  %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("frequency of number you want : \n");
    scanf("%d",&iN);
    iRet = Frequency(p,iSize,iN);
    printf("Frequency of %d is %d",iN,iRet);
    free(p);
    return 0;
}