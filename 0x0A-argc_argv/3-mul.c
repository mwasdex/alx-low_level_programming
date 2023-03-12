#include <stdio.h>
#include <stdlib.h>

/**
 * Main - A program that multiplies two numbers.
 * argc: Length of arguments
 * argv: Arguments
 * Return 1: Error
 * Return 0: Success
 */

int main(int argc, char *argv[])
{
    int i, a;

    if (argc < 3)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            a = a * atoi(argv[i]);
        }
    printf("%d\n", a);
    }
        return (0);
}