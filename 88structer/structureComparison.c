
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

   if(person1.age == person2.age && person1.salary == person2.salary)
   {
       printf("Person1 equal to person2");
   }
   else
   {
       printf("Person1 not  equal to person2");
   }

}
