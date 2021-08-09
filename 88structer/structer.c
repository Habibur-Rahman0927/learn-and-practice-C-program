#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;
};


int main()
{
   struct Person person1;

   printf("Enter information for person");

   printf("\nEnter age = ");
   scanf("%d", &person1.age);

   printf("\nEnter salary = ");
   scanf("%f", &person1.salary);

   printf("Age = %d\n", person1.age);
   printf("Salary = %.1f\n", person1.salary);
}
