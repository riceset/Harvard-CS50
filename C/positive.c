#include <stdio.h>
#include <cs50.h>

int getPositiveInt(void);

int main() {
    int i = getPositiveInt();
    printf("%i\n", i);
}

int getPositiveInt(void) {
    int n;
    do {
        n = get_int("Positive Integer: ");
    }
    while (n < 1);
    return n;
}