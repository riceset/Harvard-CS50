#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x = get_int("Type an integer: ");

    switch (x)
    {
        case 1:
            printf("One!\n");
            break;
        case 2:
            printf("Two!\n");
            break;
        default:
            printf("Sorry!\n");
    }
}