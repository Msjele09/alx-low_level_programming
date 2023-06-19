#include <stdio.h>
/**
 * main - A programme that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu", sizeof(char));
	printf("size of an int: %lu", sizeof(int));
	printf("size of a long int: %lu", sizeof(long int));
	printf("size of a long long int: %lu", sizeof(long long int));
	printf("size of a float: %lu", sizeof(float));
	return (0);
}
