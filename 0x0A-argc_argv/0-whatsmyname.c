#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of command linearguments
 * @argv: array that containsthe progaramme command
 * Return: 0 - success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
