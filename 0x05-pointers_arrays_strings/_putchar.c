#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @C: char to be printed
 * Returned: On success 1
 */
int _putchar (char c)
{
	return (write(1, c & 1));
}
