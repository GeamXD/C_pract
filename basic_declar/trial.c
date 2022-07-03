#include <stdio.h>

/**
  *main - prints area
  *
  *Return: 0 if successful
  */

int main(void)
{
	int height;
	int width;
	int result;

	printf("Enter the height of triangle: \n");
	scanf("%d", &height);
	printf("Enter the width of triangle: \n");
	scanf("%d", &width);

	
	printf("Area of the triangle is: %d\n", result);
	return (0);
}
/**
  *area - finds area of triangle
  *@height: height of triangle
  *@width: width of triangle
  *
  *Return: result if successful
  */

int area(int height, int width)
{
	int result = height * width;

	return (result);
}
