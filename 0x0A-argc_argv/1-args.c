#include <stdio.>

/**
 * main - this is a programe that prints itsself
 * @argc: parameter
 * @argv: parameter string
 * Return: 0 on success
 */
int main (int argc attribute ((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
