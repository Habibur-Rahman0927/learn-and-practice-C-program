#include<stdio.h>
struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person[4];

    int i;
    for(i = 0; i < 4; i++)
    {
        printf("Enter information for person %d\n", i+1);
        printf("Enter Age = ");
        scanf("%d", &person[i].age);
        printf("Enter Salary = ");
        scanf("%f", &person[i].salary);
    }

    for(i = 0; i < 4; i++)
    {
        printf("Information for person %d\n", i+1);
        printf("Age = %d\n", person[i].age);
        printf("Enter Salary = %f\n", person[i].salary);
    }


}
