#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c
 * @c: the character to print
 * Retrun: 1 on success -1 on error
 */
{
	int _putchar(char c)
		return (write(1, &c, 1));
}
