#include <stdio.h>
#include <unistd.h>
/**
 * main - print prints exactly and that piece of art is useful
 * Return: 0 when correctly executed
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
}
