#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_pop = get_int("Starting population: ");

    while(start_pop < 9)
    {
        int start_pop = get_int("Starting population: ");
    }

    int end_pop = get_int("Ending population: ");

    while (end_pop < start_pop)
    {
        int end_pop = get_int("Ending population: ");
    }

    int current_pop = start_pop;
    

    // TODO: Print number of years
}
