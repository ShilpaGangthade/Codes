//Q5.Write generic program to accept N values from user and return smallest values.

#include <iostream>

template <typename T>
T Min(T *arr, int iSize)
{
    T minVal = arr[0];
    
    for (int i = 1; i < iSize; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    return minVal;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = Min(arr, 5);
    std::cout << "Min of integers: " << iRet << std::endl;

    float fRet = Min(brr, 4);
    std::cout << "Min of floats: " << fRet << std::endl;

    return 0;
}
