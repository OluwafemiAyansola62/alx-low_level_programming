#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @n: memory size bytes
 * @src: pointer to be copied from
 * @dest: pointer to be copied to
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
