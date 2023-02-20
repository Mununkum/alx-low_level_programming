#include <stdio.h>
/**
 * main -size does not matter
 * Return: 0 successful
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("size of int: %lu byte(s)\n", sizeof(a));
	printf("size of char: %lu byte(s)\n", sizeof(b));
	printf("size of long int: %lu byte(s)\n", sizeof(c));
	printf("size of long long int: %lu byte(s)\n", sizeof(d));
	printf("size of float: %lu byte(s)\n", sizeof(f));
	return (0);

}
