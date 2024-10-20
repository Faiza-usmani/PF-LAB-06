#include <stdio.h>

int main()
{
    int i;
    char c = 'A';
    for ( i = 1; i < 7; i++)
    {
        if (i == 1)
        {
            printf("ABCDE\n");
        }
        else if (i == 6)
        {
            printf("%c%c%c%c%c", c+5, c+6, c+7, c+8, c+9);
        }
        
        else
        {
            printf("%c   %c\n", c+i-1, c+i+3);
        }
    }
    
    return 0;
}