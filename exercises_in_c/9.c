#include <stdio.h>

/**
  *main - entry point
  *
  *Return: 0 if successful
  */
int main(void)
{
	int i;
	int j;
	int sum;

	printf("Enter the first integer: \n");
	scanf("%d", &i);
	printf("Enter the second integer: \n");
	scanf("%d", &j);

	sum = i + j;

	printf("Sum of the above two integers : %d\n", sum);

	return (0);
}
