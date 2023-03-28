#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int printer = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printer = selector(format, args, printed);
			format++;
		}
		else
		{
			_putchar(*format);
			printer++;
			format++;
		}
	}
	va_end(args);
	return (printer);
}
