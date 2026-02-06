#include<stdio.h>
#include<cs50.h>
int main()
{
   int x= get_int("Enter a value for x: ");
   x++;
printf("after increment: %d\n", x++ );
   x-=1;
printf("After decrement: %d\n", x-=1);
return 0;
}
