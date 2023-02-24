#include <stdlib.h>
#include <time.h>
/**
 *main - postive or negative entry point
 *Return: Always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
