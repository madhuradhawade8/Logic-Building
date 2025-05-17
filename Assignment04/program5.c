#include <stdio.h>

int FactDiff(int iNo)
{
    if (iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    if (iSum1 >= iSum2)
    {
        iDiff = iSum1 - iSum2;
    }
    else
    {
        iDiff = iSum2 - iSum1;
    }
    
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\nEnter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference between sum of non factors and factors is %d", iRet);

    return 0;
}