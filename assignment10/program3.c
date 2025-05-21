#include <stdio.h>
int CountRange(int iNo)
{
    int iFrequency = 0;
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit >= 3) && (iDigit <= 7))
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

    iRet = CountRange(iValue);

    printf("Frequency of digits between 3 & 7 in number is %d", iRet);

    return 0;
}