#include <stdio.h>

void DisplayNonFactors(int iNo)
{
    if (iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            printf(" %d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("\nEnter number : ");
    scanf("%d", &iValue);

    DisplayNonFactors(iValue);

    return 0;
}