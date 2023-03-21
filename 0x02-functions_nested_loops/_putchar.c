#include <unistd.h>
/**
 * _putchar - write the characetr c to stdout
 * the character to print
 * Return: success is 1
 * error is -1 and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
