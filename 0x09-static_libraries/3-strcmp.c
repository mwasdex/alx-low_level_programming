#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: is a pointer type char
 * @s2: is a pointer type char
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int result, l;

for (l = 0; s1[l] != '\0'; l++)
{
if (s1[l] == s2[l])
result = (s1[l] - '0') - (s2[l] - '0');

else
{
result = (s1[l] - '0') - (s2[l] - '0');
break;
}
}

return (result);
}
