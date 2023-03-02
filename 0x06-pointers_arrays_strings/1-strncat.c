#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * @n: is a int variable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int k, l;
for (k = 0; *dest != 0; k++)
dest++;

for (l = 0; l < n && src[l] != 0; l++)
{
*dest = src[l];
dest++;
}
*dest = '\0';
dest -= (k + l);
return (dest);
}
