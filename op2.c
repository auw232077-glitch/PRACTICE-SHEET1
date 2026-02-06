#include<stdio.h>
#include<cs50.h>
int main(){
int c = get_int("Enter temperature in celsius: ");
float f = (c* 9.0 / 5.0) +32;
printf("Temperature in Fahrenheit is: %.2f\n", f);
return 0;
}
