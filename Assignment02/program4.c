#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf(" %d", iNo);   
    }
}

int main()
{
    int iValue = 0, iCount = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}