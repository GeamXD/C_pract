#include <stdio.h>
void reverse(int rows);
/**
 * main - prints right angle triag using * (refernce worthy)
 * Return: always 0
 */
int main(void)
{
	int i, j, rows;

	printf("input no of rows: ");
	scanf("%d", &rows);

	for (i = 0; i <= rows; i++)
	{
		for (j = 0; j <= i ; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	printf("\n");
	reverse(rows);
	return (0);
}

void reverse(int rows)
{
	int i, j;

	for (i = 0; i <= rows; i++)
	{
		for (j = i; j <= rows; j++)
		{
			putchar('*');
		}
		putchar(10);
	}
}
