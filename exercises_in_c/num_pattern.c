#include <stdio.h>
void reverse(int rows);
/**
 * main - prints num in pattern (refernce worthy)
 * Return: always 0
 */
int main(void)
{
	int i, j, count;

	printf("No Pattern like: ");
	scanf("%d", &count);

	for (i = 1; i <= count; i++)
	{
		for (j = 1; j <= i ; j++)
		{
			putchar(j + '0');
		}
		putchar('\n');
	}
	printf("\n");
	reverse(count);
	return (0);
}
/**
 * reverse -  reverses the triangle
 * @rows: parameter for rows --need to adjust***
 */
void reverse(int count)
{
	int i, j;

	for (i = 1; i <= count; i++)
	{
		for (j = i; j <= count; j++)
		{
			putchar('0' + j);
		}
		putchar(10);
	}
}
