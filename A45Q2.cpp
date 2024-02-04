/* Q2) Write generic program which accept N values and count frequency of any specific value. 
 
 Input:  10 20  30  10  30  40  10  40  10 
 Value to check frequency:10  
 Output: 4
 
 
 */


#include <iostream>

template<class T>
int frequency(T *arr, int iSize, T iNo)
{
    int count = 0;
    for (int i = 0; i < iSize; ++i) {
        if (arr[i] == iNo) {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = frequency(arr, 9, 10);
    printf("%d", iRet);

    return 0;
}