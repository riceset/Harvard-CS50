#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct
{
    string name;
    int age;
} Person;

int main(void)
{
    Person people[3];
    people[0].name = "Michael";
    people[0].age = 13;
    people[1].name = "John";
    people[1].age = 22;
    people[2].name = "Sally";
    people[2].age = 17;

    for (int i = 0; i < 3; i++)
    {
        printf("Hi! My name is %s and I am %i years old.\n", people[i].name, people[i].age);
    }
}