#include<stdio.h>
#include<cs50.h>
int main()
{
    int n = get_int("Enter n: ");
    int i;
    int sum=0;
    for(i=1; i<=n; i++)
    {
        sum += 2*i;
    }
         printf("Sum of first %d even numbers: %d\n", n, sum );
}
