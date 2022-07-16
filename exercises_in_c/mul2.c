#include <math.h>
#include <stdio.h>

/**
 * main - prints cube of n natural numbers
 * Return: 0
 */
int main(void)
{
	int i, j, n;

	printf("Input num of terms: ");
	scanf("%d", &n);

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d X %d = %d", j, i, j*i);
			if (j <= n - 1)
			{
				putchar(',');
				putchar(' ');
			}
		}
		printf("\n");
	}
	return (0);
}