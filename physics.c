#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user input
    int speed_limit = get_int("Current speed limit in mph: ");
    int u = get_int("Initial velocity mph: ");
    int v = get_int("Final velocity in mph: ");

    // calculate and display acceleration
    int t = get_int("Time in seconds: ");
    float acceleration = ((v - u)/t);
    printf("The object is acclerating at %f mph per second.\n", acceleration);

    // predict when vehicle will reach speed limit
    for (int s = 0; v <= speed_limit; s++)
    {
        v += acceleration;
        if (v > speed_limit)
        {
            printf("The vehicle will reach the speed limit after %i seconds", s);
        }
    }

}
