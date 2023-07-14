#include <stdio.h>
/**
 * main - A program that prints the size of the counter type
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	long int d;
	char c;
	long long int e;
	float f;

	printf("Sixe of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Sixe of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Sixe of a long  int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Sixe of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Sixe of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

