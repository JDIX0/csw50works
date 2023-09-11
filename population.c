#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size (s for starting population e for ending population) is it too complicated to understand?

    int s;
    do
    {
        s = get_int("Starting Population: ");
    }
    while (s < 9);
    // TODO: Prompt for end size

    int e;
    do
    {
        e = get_int("Ending Population: ");
    }
    while (s > e);

    // TODO: Calculate number of years until we reach threshold

    int years = 0;
    do
    {
        s = s + (s / 3) - (s / 4);
        years++;
    }
    while (s < e);
    // TODO: Print number of years
    printf("Years: %i\n", years);



}
