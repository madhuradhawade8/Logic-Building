#include <stdio.h>
#define TRUE 1
#define FALSE 2
typedef int BOOL;

BOOL chkZero(int iNo)
{
    while (iNo != 0)
    {
        if ((iNo % 10) == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = chkZero(iValue);

    if (bRet == TRUE)
    {
        printf ("It contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}