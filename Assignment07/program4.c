#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iAns = iAns * iCnt;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Eneter number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Even Factorial of %d is %d", iValue, iRet);

    return 0;
}