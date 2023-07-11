#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int length1, length2, length3, m;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (*(s1 + length1) != '\0')
	{
		length1++;
	}

	length2 = 0;
	while (*(s2 + length2) != '\0')
	{
		length2++;
	}

	length3 = length1 + length2;

	arr = (char *) malloc(length3 * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (m = 0; m < length1; m++)
		arr[m] = s1[m];
	for (m = 0; m < length2; m++)
		arr[m + length1] = s2[m];

	return (arr);
}
