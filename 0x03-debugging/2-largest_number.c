#include "main.h"

/**
 * main - returns the largest of 3 numbers 
 * largest_number - tests 3 numbers and returns the largest
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > a)
	{
		largest = b;
	}
	else if (c > a)
	{
		largest = c;
	}

	return (largest);
}

