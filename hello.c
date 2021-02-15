#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Asks for user input:
    string userInput = get_string("Type your name here: ");

    //Prints the user input inside a string:
    printf("Hello, %s!\n", userInput);
}