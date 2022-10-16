#include <stdio.>
/**
 * main - prints the amount of space occupied
 * Return: 0 when it is well compiled
*/
int main(void)
{
	int a;
	long b;
	long long int c;
	char r;
	float f;

	print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(r));
	print("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	print("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	print("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

