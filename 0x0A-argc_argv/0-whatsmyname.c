#include <stdio.h>

/**
 * main - print the name of the executable.
 *
 * Return: always 0.
 */

void main(int argc __attribute__((unused)), char **argv)
{
    printf("%s\n", *argv);
}
