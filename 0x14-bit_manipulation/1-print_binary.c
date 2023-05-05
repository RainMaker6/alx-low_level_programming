#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int printed = 0;

	mask = mask << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
		_putchar('0');
	else
	{
		while (mask > printed)
		{
			if ((n & mask) == 0)
				_putchar('0');
			else
				_putchar('1');
			mask = mask >> 1;
			printed++;
		}
	}
}
