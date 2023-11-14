#include "main.h"
/**
 * _printf -  produces output according to a format.
 * @format: function parameter
 * Return: 0 success, -1 failure
 */

int _printf(const char *format, ...)
{
    if (format == NULL)
        return (-1);

    int i = 0;
    int len = 0;
    va_list args;

    va_start(args, format);
    
    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            len++;
        }
        else
        {
            i++; /* check next character */
            if (format[i] == 'c')
            {
                char c = va_arg(args, int);
                
				write(1, &c, 1);
                len++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                
				if (str != NULL)
                {
                    write(1, str, strlen(str));
                    len += strlen(str);
                }
                else
                {
                    write(1, "(null)", 6); /* Handle NULL string */
                    len += 6;
                }
            }
            else if (format[i] == '%')
            {
                write(1, "%", 1);
                len++;
            }
        }
        i++;
    }

    va_end(args);
    return (len);
}
