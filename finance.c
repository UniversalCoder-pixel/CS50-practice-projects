#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float past_pro = get_int("past year profit: ");
    int exp = get_int("current year total expeses in dollars: ");
    int inc = get_int("current total income in dollars: ");
    float pro = (inc - exp);
    float grow = (((past_pro - pro) / past_pro) * 100);
    if (grow > 100)
    {
        printf("Your profit has grown by %f percent", grow);
    }
    else
    {
        printf("Your profit has decreased by %f percent", grow);
    }
}
