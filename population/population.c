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
    int i = 0;

    while (current_pop < end_pop)
    {
        i+=1;
        int current_pop = current_pop + current_pop/3 - current_pop/4;
    }

    printf("Number of years needed is, %)
}
