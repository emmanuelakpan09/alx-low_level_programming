#include <stdio.h>
/**
 *main - to demostrate magic in pointers
 *in your new line of code
 *Return: 0
 */

int main(void)
{
int n;
int a[4];
int *p;
a[2] = 98;
p = &n;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
*(p + 4) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
