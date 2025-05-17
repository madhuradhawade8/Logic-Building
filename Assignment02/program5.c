#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = checkEven(iValue);

    if (bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is not even");
    }
}