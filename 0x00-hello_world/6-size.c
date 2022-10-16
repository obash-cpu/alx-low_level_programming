#include <stdio.h>
/**
 * main - prints the amount of space occupied
 * Return: 0 when it is well compiled
*/
int main(void)
{

	print("Size of a char: %lu byte(s)\n", sizeof(char));
	print("Size of an int: %lu byte(s)\n", sizeof(int));
	print("Size of a long int: %lu byte(s)\n", sizeof(long int));
	print("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	print("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

