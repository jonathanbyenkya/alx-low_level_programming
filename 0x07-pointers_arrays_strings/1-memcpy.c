#include "main.h"

/**
 * _memcpy - Copies a string pointed to by source, including the
 * terminating null byte, to a buffer pointed to by destination
 *
 * @dest: A buffer to copy the string to. char
 * @src: The source string to copy. char
 * @n: unsigned int variable
 *
 * Return: A pointer to the destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
