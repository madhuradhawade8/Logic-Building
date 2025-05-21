#include <stdio.h>
int CountFour(int iNo)
{
    int iFrequency = 0;

    while (iNo != 0)
    {
        if ((iNo % 10) == 4)
        {
            iFrequency++;
        }
        iNo = iNo/10;
    }
    return iFrequency;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 digit in number is %d", iRet);

    return 0;
}