#include <stdio.h>
#include <math.h>

/**
 * main - prints cube of n natural numbers
 * Return: 0
 */
int main(void)
{
	int i, n;

	printf("Input num of terms: \n");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		printf("Number is: %d and cube of %d is :%d\n", i, i, i*i*i);
	}
	return (0);
}
