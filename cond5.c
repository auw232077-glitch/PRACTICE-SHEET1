#include<stdio.h>
#include<cs50.h>
int main()
{
    int age= get_int("Enter an age: ");
    int student_status= get_int("Enter student-status select 1 for student, 0 for not student: ");
    if (age <12)
    {
        printf("price=50\n");
    }
    else if (age>= 12 && age <=60)
    {
        if(student_status==1)
        {
            printf("price=80\n");
        }
        else
        {
            printf("price =100\n");
        }
    }
    else
    {
        printf("price =60\n");
    }
}
