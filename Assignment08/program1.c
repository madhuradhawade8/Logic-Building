#include <stdio.h>
double CircleArea(int iNo)
{
    return 3.14 * iNo * iNo;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %d", dRet);

    return 0;
}