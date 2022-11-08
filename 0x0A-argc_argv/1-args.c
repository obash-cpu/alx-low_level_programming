#include <stdio.>

/**
 * main - this is a programe that prints itsself
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
