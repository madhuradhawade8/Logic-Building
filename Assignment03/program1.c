#include <stdio.h>

void printEven(int iNo)
{
    if (iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printEven(iValue);

    return 0;
}