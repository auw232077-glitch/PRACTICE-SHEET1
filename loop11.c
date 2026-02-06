#include<stdio.h>
#include<cs50.h>
int main()
{
    int n = get_int("Enter n: ");
    int i, count =0;
    for (i=1; i<=n; i++)
    {
        if(i%5==0)
        {
            count++;

        }

    }
    printf("number of divisible by 5: %d\n",count);

}
