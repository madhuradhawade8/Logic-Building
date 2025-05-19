#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iAns = iAns * iCnt;
        }
    }
    if (iAns == 1)
        return 0;
    else
        return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Eneter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of %d is %d", iValue, iRet);

    return 0;
}