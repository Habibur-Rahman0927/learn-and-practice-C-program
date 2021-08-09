#include<stdio.h>
struct Person
{
    char name[20];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n", p.age);
    printf("Salary : %f\n\n", p.salary);
}


int main()
{
    struct Person person1, person2;

    strcpy(person1.name, "Habibur Rahman");
    person1.age = 22;
    person1.salary = 25000;
    display(person1);

    strcpy(person2.name, "Rockstar");
    person2.age = 22;
    person2.salary = 25000;
    display(person2);
}
