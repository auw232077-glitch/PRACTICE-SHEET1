#include<stdio.h>
#include<cs50.h>
int main()
{
    int n= get_int("Enter n: ");
    int i, sum=0;
    for(i=1; i<=n; i++)
    {
        sum +=2*i-1;
    }
    printf("Sum of first %d odd numbers : %d\n", n, sum);
}
