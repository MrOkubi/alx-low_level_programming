#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Sucess)
 */

int main(void)
{
	char a;
	int c;
	long int d;
	long long int f;
	float g;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(g));
return (0);
}
