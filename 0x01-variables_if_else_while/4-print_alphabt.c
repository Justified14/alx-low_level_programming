#include <stdio.h>

/**
 * main - A program that print lowercase followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'n') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
