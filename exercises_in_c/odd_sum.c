#include <stdio.h>

/**
 * main - prints  first n odd natural numbers and sum
 * Return: always 0
 */
int main(void)
{
	int i, n, sum;
	sum = 0;

	printf("Enter the no of Terms: ");
	scanf("%d", &n);
	printf("\nThe first %d odd natural no are: ", n);
	for (i = 1; i <= n ;i++)
	{
		printf("%d ", 2 * i - 1);
		sum += 2 * i - 1;
	}
		printf("\nThe sum of %d odd numbers is: %d\n", n, sum);
	return (0);
}