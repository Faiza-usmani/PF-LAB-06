#include <stdio.h>

int main() 
{
    int i = 1, var;
    printf("Enter a number:\t");
    scanf("%d", &i);
    while(i != 0)
    {
        var = var + i;
        printf("%d\n", var);
         printf("Enter a number (enter 0 to exit):\t");
        scanf("%d", &i);
    }
    return 0;
}