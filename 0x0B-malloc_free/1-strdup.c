#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int length, m;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	arr = malloc(length * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (m = 0; m < length; m++)
	{
		arr[m] = str[m];
	}
	arr[m] = '\0';


	return (arr);
}
