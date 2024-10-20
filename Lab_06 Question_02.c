#include <stdio.h>

int main() 
{
    int num, i, isprime = 1;
    printf("Enter a number:\t");
    scanf("%d", &num);
    if(num <= 1)
    {
           isprime = 0;
    }
    else
    {
           for(i = 2; i < num; i++)
           {
                 if(num % i == 0)
                 {
                        isprime = 0;
                        break;
                 }
           }
    }
    
    if(isprime)
         printf("Number is prime");
    else
        printf("Number is not prime");                  
    return 0;
}