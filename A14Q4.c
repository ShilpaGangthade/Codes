// Accept N numbers from user and return frequency of 11 from it.
/*

Input : N : 6
        Elements : 85   66  3   80  93  88
Output : 0

Input : N : 6
        Elements : 85   11  3   15  11  111
Output : 2

*/
//Program Layout :

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iValue)
{
    int iCnt=0;
    int iFreq = 0;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iFreq=iFreq+1;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iRet =0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
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

    iRet = CountEven(p,iSize);
    printf("Frequency of 11 is %d",iRet);
    free(p);
    return 0;
}