#include <stdio.h>
#include <unistd.h>
/**
 *main - program to print standard error
 *Return: always
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	exit(1);
}
