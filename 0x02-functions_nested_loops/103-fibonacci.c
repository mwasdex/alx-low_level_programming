#include <stdio.h>

/**
 * main - prints the sum of all even Fibonacci numbers below 4,000,000
 * main - program that finds and prints the sum of the even-valued term
 * Description: program that finds and prints the sum of the even-valued terms
 * Return: Always 0 (success)
 */

int main(void)
{
	long int total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		first = second;
		second = sum;
	}

	printf("%li\n", total_sum);

	return (0);
}
