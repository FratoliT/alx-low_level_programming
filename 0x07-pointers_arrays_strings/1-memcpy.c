#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory where it's stored
 * @src: memory where it's copied
 * @n: number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0, i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);

}
