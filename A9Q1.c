// Q1)- Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14. ( Area = PI * Radius * Radius)
/*

Input : 5.3
Output : 88.2026

Input : 10.4
Output : 339.6224

*/

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    float fArea = fRadius * fRadius * PI;
    return fArea;
}

int main()
{
    float fValue= 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of a Circle is : %f",dRet);

    return 0;
}