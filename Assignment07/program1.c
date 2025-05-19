#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = -iNo; iCnt < iNo; iCnt++)
    {
        if (iCnt < 0)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}