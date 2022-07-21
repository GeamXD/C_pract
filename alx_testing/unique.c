#include "main.h"
#include <stdio.h>

/**
 * main - prints combination of three digits
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;

	i = 0;

	while (i <= 98)
	{
		j = 1;
		int t, u, tt, uu;

		while (j <=  99)
		{
			t = (i / 10) % 10;
			tt = (j / 10) % 10;
			u = i % 10;
			uu = j % 10;

		if (i < j && i != j)
		{
			putchar(t + '0');
			putchar(u + '0');
			putchar(' ');
			putchar(tt + '0');
			putchar(uu + '0');
			if (i <= 97)
			{
			putchar(',');
			putchar(' ');
			}
		}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
