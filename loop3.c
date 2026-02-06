#include<stdio.h>
#include<cs50.h>
int main()
{
    int n= get_int("Enter your number: ");
    int i;
    for(i=1; i<=n; i++)
    {
        printf("%d-", i);
    }

}
