#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * desription: tests 3 numbers and returns the largest of them
 * @a: first int
 * * @b: second int
 * * @c: third int
 * * Return: largest number
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

