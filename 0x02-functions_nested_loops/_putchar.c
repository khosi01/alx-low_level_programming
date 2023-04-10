#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @C: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriatley.
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
}
