#include<stdio.h>
#include<cs50.h>
int main()
{
    int year = get_int("Enter a year\n: ");
    if ((year%4==0 && year%100 ==0 )|| year%400==0)
    {
        printf("leap year\n");
    }
    else

    {
    printf("not leap year");
    }

}





