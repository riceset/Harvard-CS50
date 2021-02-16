#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Gets user's name
    string answer = get_string("What's your name?\n");

    //Prints hello world
    printf("Hello, %s!\n", answer);
}