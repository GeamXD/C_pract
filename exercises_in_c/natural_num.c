#include <stdio.h>

/**
 * main - prints first 10 natural numbers
 * Return: Always 0
 */
void _natural(void);
int main(void)
{
	int i;

	for (i = 1; i < 11; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');

	printf("Natural numbers using putchar below: \n");
	_natural();
	return (0);
}
/**
 * _natural - prints using putchar first 10 natural numbers
 */
void _natural(void)
{
	int j;

	for (j = 1; j <= 20; j++)
	{
		if ( j < 10)
		{
			putchar(j + '0');
			putchar(',');
		}

		else if (j >= 10)
		{
			int firdig = j / 10;
			int lasdig = j % 10;
			putchar(firdig + '0');
			putchar(lasdig + '0');
			if ( j >= 10 && j <= 19)
			putchar(',');
		}
	}
	putchar('\n');
}
