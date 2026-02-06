#include<stdio.h>
#include<cs50.h>
int main()
{int num = get_int("Enter your first number: ");
    int num1 = get_int("Enter your second number: ");
    int sum = num+num1;
    int diff= num-num1;
    int pro = num*num1;
    int quo= num/num1;
    int remin = num%num1;
    printf("Sum equals to: %d\n", sum );
    printf("Difference equals to: %d\n", diff );
    printf("Product equals to: %d\n", pro );
    printf("Quotient equals to: %d\n", quo );
    printf("Reminder equals to: %d\n", remin );

    return 0;

}
