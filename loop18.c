#include<stdio.h>
#include<cs50.h>
int main()
{
    int n = get_int("Enter number of rows: ");
    int i;
    int num=1;
    for(i=1; i<=n; i++)
    {
        int h;
        for(h=1; h<=i; h++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
}
