#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int r, e, v;

	e = 0;
	v = n - 1;
	for (r = 0; r < n / 2; r++)
	{
		e = a[v];
		a[v] = a[r];
		a[r] = e;
		v--;
	}
}
