
#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;
};


int main()
{
   struct Person person1 = {22, 55000};
   struct Person person2, person3;

   person2.age = 33;
   person2.salary = 90000;

   person3 = person2;

   printf("Enter information for person\n");

   printf("Age = %d\n", person1.age);
   printf("Salary = %.1f\n", person1.salary);

    printf("Age = %d\n", person2.age);
    printf("Salary = %.1f\n", person2.salary);

    printf("Age = %d\n", person3.age);
    printf("Salary = %.1f\n", person3.salary);
}
