/* Q5) Write generic program which accept N values and reverse the contents.
 Input:  10 20  30  10  30  40  10  40  10 
 Output: 10 40  10  40  30  10  30  20  10  
 
 
 */


#include <iostream>

template<class T>
void Reverse(T *arr, int iSize)
{
    for (int i = 0; i < iSize / 2; ++i) {
        T temp = arr[i];
        arr[i] = arr[iSize - i - 1];
        arr[iSize - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    
    std::cout << "Original array: ";
    for (int i = 0; i < 9; ++i) {
        std::cout << arr[i] << " ";
    }

    Reverse(arr, 9);

    std::cout << "\nReversed array: ";
    for (int i = 0; i < 9; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}