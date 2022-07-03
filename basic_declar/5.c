#include <stdio.h>

/**
  *main - prints area and perimeter
  *
  *Return: 0 if successful
  */
int main(void)
{
	int height = 7;
	int width = 5;
	int perimeter;
	int area;

	perimeter = 2 * (height + width);
	area = height * width;
	printf("Perimeter of the triangle is :%d inches\n", perimeter);
	printf("Area of the triangle is :%d square inches\n", area);

	return (0);
}
