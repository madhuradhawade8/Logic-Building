#include <stdio.h>
double SquareMeter(int iNo)
{
    return 0.0929 * iNo;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %g", dRet);

    return 0;
}