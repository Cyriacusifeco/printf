#include "main.h"
#include <stdarg.h>
/**
 * _printf - sends formatted input to standard output
 * @format: pointer to unnamed character string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	char *string;
	const char *ptr;
	int integer, count = 0;
	float fp;
	char character;
	va_list list;
	va_start(list, format);

	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			_putchar(*ptr);
			count++;
			continue;
		}
		switch (*++ptr)
		{
			case 'c':
				character = va_arg(list, int);
				_putchar(character);
				count++;
				break;

			case 's':
				for (string = va_arg(list, char *); *string; string++)
				{
					_putchar(*string);
					count++;
				}
					break;

			case 'd':
				integer = va_arg(list, int);
				_putchar(integer);
				count++;
				break;

			case 'f':
				fp = va_arg(list, double);
				_putchar(fp);
				count++;
				break;

			default:
				_putchar(*ptr);
				count++;
				break;
		}
	}
	va_end(list);
return (count);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
