#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,  m;
	char o = "Last digit of";
	char p = "is"

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("%c %d %c %d and is greater than 5\n",o, n, p, m);
	} else if (m == 0)
	{
		printf("%c %d %c %d and is 0\n",o, n, p, m);
	} else
	}
		printf("%c %d %c %d and is less than 6\n",o, n, p, m);
	return (0);
}
