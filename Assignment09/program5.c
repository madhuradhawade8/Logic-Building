#include <stdio.h>
int Count(int iNo)
{
    int iFrequency = 0;

    while (iNo != 0)
    {
        if ((iNo% 10) < 6)
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

    iRet = Count(iValue);

    printf("Frequency of digits less than 6 in number is %d", iRet);

    return 0;
}