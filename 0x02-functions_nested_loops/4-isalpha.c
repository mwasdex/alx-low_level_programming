#include "main.h"

/**
 * _isalpha - check alphabetic character
 * @c: function that checks for alphabetic character
 * main - check alphabetic charater
 * Return: Always 0 (succesful)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
