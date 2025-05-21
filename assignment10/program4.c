#include <stdio.h>
int MultDigits(int iNo)
{
    int iMult = 1;

    while (iNo != 0)
    {     
        iMult = iMult * (iNo % 10);
        iNo = iNo/10;
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Product of digits in number is %d", iRet);

    return 0;
}