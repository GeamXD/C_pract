#include <stdio.h>

/**
 * main - prints n natural num and their sum and average
 * Return: 0
 */
int main(void)
{
	int i, n, sum, average;
	sum = 0;

	printf("Enter value of N natural no: \n");
	scanf("%d", &n);

	printf("The first %d natural number is : \n", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
		sum += i;
	}
	printf("\nThe Sum of Natural Number upto %d terms : %d\n", n, sum);
	return (0);
}
