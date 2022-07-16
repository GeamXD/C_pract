#include <stdio.h>

/**
 * main - prints sum of first 10 natural numbers
 * Return: always 0
 */
int main(void)
{
	int i;
	int count = 10;
	int sum;
	sum = 0;

	for (i = 1; i <= count ; i++)
	{
		sum += i;
	}
	printf("sum: %d\n", sum);
	return (0);
}
