//Q4.Write generic program to accept N values from user and return largest values.

#include <iostream>

template <typename T>
T Max(T *arr, int iSize)
{
    T maxVal = arr[0];
    
    for (int i = 1; i < iSize; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = Max(arr, 5);
    std::cout << "Max of integers: " << iRet << std::endl;

    float fRet = Max(brr, 4);
    std::cout << "Max of floats: " << fRet << std::endl;

    return 0;
}
