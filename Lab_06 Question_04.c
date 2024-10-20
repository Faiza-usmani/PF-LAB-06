#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number to check if it is a Armstrong number or not.");
    scanf("%d", &num);
    int original = num;
    while (num != 0)
    {
        int last = num % 10;
        sum = sum + (last * last * last);
        num = num / 10;
    }
    if (sum == original)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }

    return 0;
}