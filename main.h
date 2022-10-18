#ifndef PRINT_F
#define PRINT_F
#include <unistd.h>


/**
 * _printf - writes the string *format to stdout
 * @format: Pointer to a string to be printed on the screen
 * Return: On success, returns the number of characters printed
 * On error, -1 is returned, and errno is set appropriately.
 */

int _printf(const char *format, ...);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);


#endif
