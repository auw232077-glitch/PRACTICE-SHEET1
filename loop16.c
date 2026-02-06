#include<stdio.h>
#include<cs50.h>
int main()
{
    int n=get_int("Enter number of rows: ");
    int i;
    for(i=1; i<=n; i++)
    {
        int j;
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
