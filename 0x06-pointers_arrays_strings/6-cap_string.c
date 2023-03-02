#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @a: is a pointer type char
 * Return: Always 0.
 *
 */

char *cap_string(char *a)
{
	char separator[] = " \t\n,;.!?\"(){}";
	int k, l;

	for (k = 0; a[k] != '\0'; k++)
	{

		if (a[k] >= 'a' && a[k] <= 'z')
	{

		if (k == 0)
		a[k] -= 32;


	else
	{
		for (l = 0; separator[l] != '\0'; l++)
	{
		if (a[k - 1] == separator[l])
		a[k] -= 32;
	}
	}

	}
	}
	return (a);
}
