#include <stdio.h>

/**
 * main - prints n natural num and their sum
 * Return: 0
 */
int main(void)
{
	int i, n, sum;
	float avg = 0;
	sum = 0;

	printf("Enter value of N natural no: \n");
	scanf("%d", &n);

	printf("The first %d natural number is : \n", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
		sum += i;
		avg = (float) sum / (float) i;
	}
	
	printf("\nThe Sum of Natural Number upto %d terms : %d\n", n, sum);
	printf("The average is : %.2f\n", avg);
	return (0);
}
