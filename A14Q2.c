// Accept N numbers from user and return difference between frequency of even number and odd numbers.
/*

Input : N : 7
        Elements : 85   66  3   80  93  88  90
Output :1(4-3)

*/
//Program Layout :

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iValue)
{
    int iCnt=0;
    int iFreqE = 0;
    int iFreqO = 0;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iFreqE=iFreqE+1;
        }
        else 
        {
            iFreqO = iFreqO + 1;
        }
    }
    return (iFreqE-iFreqO);
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
    printf("Differenc in Frequency of even and odd numbers is %d",iRet);
    free(p);
    return 0;
}