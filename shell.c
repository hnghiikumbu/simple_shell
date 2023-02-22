#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** print positive if n greater than 0 */
	if (n > 0)
		printf("%d is positive\n", n);
	/** print negative if n lesst than 0 */
	else if (n < 0)
		printf("%d is negative\n", n);
	/** print zero if n is equal to 0 */
	else
		printf("%d is zero\n", n);
	return (0);
}
