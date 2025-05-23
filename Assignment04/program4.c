#include <stdio.h>

int AddNonFactors(int iNo)
{
    if (iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    int iSum = 0;
    
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\nEnter number : ");
    scanf("%d", &iValue);

    iRet = AddNonFactors(iValue);

    printf("Addition of non factors is %d", iRet);

    return 0;
}