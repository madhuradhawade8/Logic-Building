#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for (int i = 1, iCnt = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++, iCnt++)
        {
            printf("%d\t", iCnt);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows & columns : ");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}