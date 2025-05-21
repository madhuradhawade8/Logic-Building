#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char small_ch = '\0', capital_ch = '\0';

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1, small_ch = 'a', capital_ch = 'A'; j <= iCol; j++, small_ch++, capital_ch++)
        {
            if ((i % 2) == 0)
            {
                printf("%c\t", small_ch);
            }
            else
            {
                printf("%c\t", capital_ch);
            }
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