#include <stdio.h>

/**
*main - Entry point
*Return: 0 (Success)
*/
int main(void)
{
	char charType;
	int intType;
	long longInt;
	long long longlongInt;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of long int: %d byte(s)\n", sizeof(longInt));
	printf("Size of long long int: %d byte(s)\n", sizeof(longlongInt));
	printf("size of float: %d byte(s)\n", sizeof(floatType));
	Return 0;
}
