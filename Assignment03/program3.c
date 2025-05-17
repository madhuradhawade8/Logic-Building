#include <stdio.h>

void DisplayEvenFactors(int iNo)
{
    if (iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if (((iCnt % 2) == 0) && ((iNo % iCnt) == 0))
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);

    return 0;
}