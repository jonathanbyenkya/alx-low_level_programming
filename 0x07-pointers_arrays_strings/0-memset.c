#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: char memory area pointed
 * @b: char the constant byte
 * @n: int fills the first n bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
