#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase.
 * @s1: is a pointer type char
 * Return: Always 0.
 *
 */
char *string_toupper(char *s1)
{
int m, n;
char o[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char p;
for (m = 0; s1[m] != '\0'; m++)
{
n = 0;
for (p = 'a'; p <= 'z'; p++, n++)
{
if (s1[m] == p)
s1[m] = o[n];
}
}

return (s1);
}
