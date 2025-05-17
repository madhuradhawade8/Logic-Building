#include <stdio.h>

void DisplayMultiplicationFactors(int iNo)
{
    if (iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 1; iCnt < (iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    printf("Multiplication of factors is %d", iMul);
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayMultiplicationFactors(iValue);

    return 0;
}