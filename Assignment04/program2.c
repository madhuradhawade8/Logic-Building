#include <stdio.h>

void DisplayFactorsInDecreasingOrder(int iNo)
{
    if (iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    
    for (iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0)
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

    DisplayFactorsInDecreasingOrder(iValue);

    return 0;
}