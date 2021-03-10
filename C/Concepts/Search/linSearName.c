#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    const int MAX = 5;
    char *names[MAX] = {"John", "Michael", "Bob", "Tom", "Marques"};
    char *target = get_string("Name: ");

    for (int i = 0; i < MAX; i++)
    {
        if (strcmp(names[i], target) == 0)
        {
            printf("Found: %s\n", names[i]);
            return 0;
        }
    }
    printf("ERROR: Not Found.\n");
    return 1;
}