#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get numbers as input
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    float z = (float) x / (float) y;

    printf("%f divided by %f is %f.\n", x, y, z);
}