#import <stdio.h>
#import <cs50.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");

    printf("%.2f\n", x / y);

}