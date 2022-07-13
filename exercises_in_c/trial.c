#include <stdio.h>

float area(int h, int w);
/**
  *main - prints area
  *
  *Return: 0 if successful
  */
int main(void)
{
	int h;
	float area0;
	int w;

	printf("Enter the value of Height: \n");
	scanf("%d", &h);
	while (h <= 0)
	{
		printf("Enter a real number \n");
		scanf("%d", &h);
	}

	printf("Enter the value of Width: \n");
	scanf("%d", &w);

	while (w <= 0)
	{
		printf("Enter a real number \n");
		scanf("%d", &w);
	}

	area0 = area(h, w);

	printf("The area of the triangle is: %.1f. \n", area0);
	return (0);
}
/**
  *area- finds area of triangle
  *@h: height of triangle
  *@w: width of triangle
  *
  *Return: result if successful
  */
float area(int h, int w)
{
	float result;

	result = 0.5 * (h * w);
	return (result);
}
