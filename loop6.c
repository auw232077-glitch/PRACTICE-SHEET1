#include<stdio.h>
#include<cs50.h>
int main()
{
    int i, sum=0;
    for(i=1; i<=10; i++)
    {
        sum +=i;
        printf("Sum of 1 to 10 = %d\n", sum);
    }
}
