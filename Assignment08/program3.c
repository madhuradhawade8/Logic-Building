#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter KMs : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Meters are %d", iRet);

    return 0;
}