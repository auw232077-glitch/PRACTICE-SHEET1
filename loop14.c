#include<stdio.h>
#include<cs50.h>
int main()
{
    int n = get_int("Enter n: ");
    int count =0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
     printf("Number of digits = %d\n", count);
}
