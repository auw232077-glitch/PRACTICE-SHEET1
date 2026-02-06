#include<stdio.h>
#include<cs50.h>
int main()
{
int num= get_int ("Enter your number: ");
if (num % 2==0)
    {
        printf("Your number is even\n");
    }
else
{
    printf("Your number is odd\n");

}}
