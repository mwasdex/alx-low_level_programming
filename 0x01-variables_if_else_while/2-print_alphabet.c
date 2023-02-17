#include <stdio.h>

/**
 * main - print lowwercase alphabet
 *
 * Description: print lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 10;

	while (i < 36)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
