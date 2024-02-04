//Q3.Write generic program to accept N values from user and return addition of that values.

#include <iostream>

template <class T>
T AddN(T *arr, int iSize)
{
    T sum = 0;
    for (int i = 0; i < iSize; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iSum = AddN(arr, 5);
    std::cout << "Sum of integers: " << iSum << std::endl;

    float fSum = AddN(brr, 4);
    std::cout << "Sum of floats: " << fSum << std::endl;

    return 0;
}
