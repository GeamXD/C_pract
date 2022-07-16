#include <math.h>
#include <stdio.h>

/**
 * main - prints cube of n natural numbers
 * Return: 0
 */
int main(void)
{
	int i, n;

	printf("Input num of terms: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (i <= 10)
		printf("%d X %d = %d \n", n, i, n*i);
		else
			break;
	}
	
	return (0);
}