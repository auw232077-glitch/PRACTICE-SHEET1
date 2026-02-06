#include<stdio.h>
#include<cs50.h>
int main()
{
    int n= get_int("Enter value of n: ");
    int multiple= 1;
    int i;
    for(i=1; i<=n; i++)
    {
        multiple= 3*i;
        printf("multiples of 3 are: %d\n",  multiple);
    }
}
