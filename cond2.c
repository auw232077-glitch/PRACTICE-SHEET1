#include<stdio.h>
#include<cs50.h>
int main()
{
    int score = get_int("Enter your score: " );
    if (score>90)
    {
        printf("You are in grade A\n");
    }
    else if (score>=80)
    {
        printf("Your grade is B\n");
    }
    else if (score>= 70)
    {
        printf("Your grade is C\n");
    }
   
    else
    {
        printf(" grade: Faild");
    }
}
