#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if (iCnt < 0)
    {
        iCnt = -iCnt;
    }

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}