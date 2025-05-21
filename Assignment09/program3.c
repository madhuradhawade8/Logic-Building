#include <stdio.h>
int CountTwo(int iNo)
{
    int iFrequency = 0;

    while (iNo != 0)
    {
        if ((iNo % 10) == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of 2 digit in number is %d", iRet);

    return 0;
}