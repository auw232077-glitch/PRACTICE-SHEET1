#include<stdio.h>
#include<cs50.h>
int main()
{
    int n = get_int("Enter a number: ");
    int i, sum=0;
    for(i=1; i<=n; i++)
    {
        sum+=i;

    }
      printf("Sum of %d to %d is  : %d\n",i,n, sum);
}
