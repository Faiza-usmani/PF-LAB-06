#include <stdio.h>

int main()
{
    int num, i, is_prime = 1;
    printf("Enter a number:\t");
    scanf("%d", &num);
    if (num <= 1)

    
    {
        is_prime = 0;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        printf("Number is prime\n");
    else
        printf("Number is not prime\n");

    int a = 0, b = 1, c;

    if (is_prime)
    {
        printf("Fibonnachi series is: \t");
        printf("%d%d", a, b);
        c = a + b;
        for (int j = 0; c <= num; j++)
        {
            printf("%d", c);
            a = b;
            b = c;
            c = a + b;
        }
    }
    
    return 0;
}