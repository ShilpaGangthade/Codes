//Q1.Write generic program to multiply two numbers.

#include <iostream>

template <typename T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);
    std::cout << iRet << std::endl;

    float fRet = Multiply(10.0f, 20.0f);
    std::cout << fRet << std::endl;

    return 0;
}
