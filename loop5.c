#include<stdio.h>
#include<cs50.h>
int main()
{
    int num= get_int("Enter a number: ");
    int i;
    for(i=1; i<=num; i+=2)
    {
        printf("%d\n", i);
    }
}
