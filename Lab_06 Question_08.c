#include <stdio.h>

int main()
{
    int i;
    char c = 'A';
    for (i = 1; i < 6; i++)
    {
        if (i == 1)
        {
            printf("ABCDE\n");
        }
        else if (i == 5)
        {
            printf("%c%c%c%c%c\n", c + 4, c + 5, c + 6, c + 7, c + 8);
        }
        else if (i == 2)
        {
            printf(" %c %c\n", c + 2, c + 5);
        }
        else if (i == 4)
        {
            printf(" %c %c\n", c + 4, c + 7);
        }
        else
        {
            printf("  %c\n", c + 4);
        }
    }

    return 0;
}