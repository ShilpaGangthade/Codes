/* Q4) Write generic program which accept N values and search last occurence of any specific value.
 Input:  10 20  30  10  30  40  10  40  10 
 Values to search:40  
 Output: 8
 
 
 */


#include <iostream>

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int lastIndex = -1;
    for (int i = 0; i < iSize; ++i)
     {
        if (arr[i] == iNo) 
        {
            lastIndex = i + 1; 
        }
    }

    return lastIndex;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchLast(arr, 9, 40);
    
    if (iRet != -1) {
        std::cout << iRet;
    } else {
        std::cout << "Value not found";
    }

    return 0;
}