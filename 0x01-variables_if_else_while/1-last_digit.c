#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,  l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	} else if (n == 0)
	{
		printf("Last digit of %d  is %d and is 0\n", n, l);
	} else
	{
		printf("Last digit of %d is %d and is less than 6\n", n, l);
	}
	return (0);
}