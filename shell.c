#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count = 10; /* Define the limit for the loop */

    /* Loop to iterate through numbers */
    for (int i = 0; i < count; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even number: %d\n", i); /* Print even numbers */
        }
        else
        {
            printf("Odd number: %d\n", i); /* Print odd numbers */
        }
    }

    return 0;
}
