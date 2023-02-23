#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
int main(void) {
    print_alphabet_x10();

    char ch;
    int i = 0;
    while (i < 10)
    {
        ch = 'a';
        while (ch <= 'z')
        {
            putchar(ch);
            ch++;
        }
        putchar('\n');
        i++;
    }
}
