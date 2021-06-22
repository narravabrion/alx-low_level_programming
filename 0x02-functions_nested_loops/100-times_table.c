#include "holberton.h"
/**
 * print_times_table - prints the multiplicaiton times table
 * @n: takes in the what times table user wants, type int
 * Prints only digts and uses _putchar function
 */
void print_times_table(int n)
{
	int c, r, num, tens;

	if (!(n >= 0 && n < 15))
		return;
	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n ; c++)
		{
			num = r * c;
			tens = num / 10;
			if (tens > 9) /* makes sure tens is a single digit ex. 123/10=12%10=2*/
				tens = tens % 10;
			if (c == 0) /*Print the first coloum*/
				_putchar('0');
			else if (tens == 0 && (num / 100) == 0)
			{/*print only single digits and so 101 work*/
				_putchar(' ');
				_putchar(' ');
				_putchar((num % 10) + '0');
			}
			else if ((num / 100) == 0) /*Print double digits*/
			{
				_putchar(' ');
				_putchar(tens + '0');
				_putchar((num % 10) + '0');

			}
			else /*print everything else*/
			{
				_putchar((num / 100) + '0');
				_putchar(tens + '0');
				_putchar((num % 10) + '0');
			}
			if (c != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		} _putchar('\n');
	}
}
