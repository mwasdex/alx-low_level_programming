#include "main.h"

/**
 * puts2 - prints every other characterof a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
