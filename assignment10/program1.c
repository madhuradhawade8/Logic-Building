#include <stdio.h>
int CountEven(int iNo)
{
    int iFrequency = 0;

    while (iNo != 0)
    {
        if (((iNo % 10) % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("Frequency of even digits in number is %d", iRet);

    return 0;
}