#include <stdio.h>

/**
 *  main- get input from users
 *
 *  Return: 0
 */

int main(void)
{
	int finger, i;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &finger);
		printf("finger cntains %d", finger);
	}
	return 0;
}
