#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct
{
    string name;
    int age;

    void say()
    {
        printf("Hi! My name is %s, I am %i years old.\n", name, age);
    }
} Person;

int main(int argc, string argv[])
{
    Person Jack;
    Jack.name = "Jack";
    Jack.age = 20;
    Jack.say;
}