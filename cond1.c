#include<stdio.h>
#include<cs50.h>
int main()
{
    int x = get_int("Enter a numcer: ");
    if (x==0)
    {printf("%d is equal to zero\n",x );
    }
    else if (x>0)
    {
        printf("%d is positive\n",x );
    }
    else 
    {
        printf("%d is negative \n", x);
    }
}
