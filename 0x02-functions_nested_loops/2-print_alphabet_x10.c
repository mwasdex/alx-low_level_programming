#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet ten times
 * main - print lowercase ten times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0;

		while (j < 10)
		{
			for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
			_putchar('\n');
			j++;
		}
}
