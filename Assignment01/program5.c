//Accept one number from user and print that number of * on screen
#include <stdio.h>

void Accept(int iNo)
{
    int i = 0;
    for (i = 1; i <= iNo; i++)
    {
        printf("*");
    }
}

int main()
{
    int iValue;
    printf("Enter number : ");
    scanf("%d", &iValue);

    Accept(iValue);
    
    return 0;
}