// Q2.Write a generic  program to find largest number from three numbers.

#include <iostream>

template <typename T>
T Max(T num1, T num2, T num3)
{
    T maxNum = num1;

    if (num2 > maxNum)
    {
        maxNum = num2;
    }

    if (num3 > maxNum)
    {
        maxNum = num3;
    }

    return maxNum;
}

int main()
{
    int iMax = Max(10, 5, 8);
    std::cout << "Max of 10, 5, 8: " << iMax << std::endl;

    float fMax = Max(15.5f, 20.3f, 10.2f);
    std::cout << "Max of 15.5, 20.3, 10.2: " << fMax << std::endl;

    return 0;
}
