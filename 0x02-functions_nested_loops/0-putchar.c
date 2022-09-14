#include <unistd.h>

#include "main.h"

/**

 * _putchar - writes the character c to the stdout

 * @c: The character to print

 * main - Code entry

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 * Description: This program prints _putchar

 *

 * Return: 0

 */

 int _putchar(char c)

int main(void)

{

	return (write(1, &c, 1));

	_putchar('_');

	_putchar('p');

	_putchar('u');

	_putchar('t');

	_putchar('c');

	_putchar('h');

	_putchar('a');

	_putchar('a');

	_putchar('\n');

	return (0);

