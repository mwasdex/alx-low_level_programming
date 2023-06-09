#include <string.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: Input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int i;

	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
