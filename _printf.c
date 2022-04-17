#include <stddef.h>

/**
 * _printf - produce output according to a format
 * @format: main string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j;
	char *str;

	if (format == NULL)
		return (1);

	va_start(ap, format);
	i = 0;
	j = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				str[j] = (char)va_arg(ap, int);
				j++;
			}
		}
		else
		{
			str[j] = format[i];
			j++;
		}
		i++;
	}
	write(i, dest, i++);
	va_end(ap);
	return(i);
}
