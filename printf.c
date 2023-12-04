#include"main.h"
#include<stddef.h>
#include<stdarg.h>

int _printf(const char *format, ...)
{
	int x;
	int y = 0;
	int v;
	int num;
	
	va_list print;
	va_start(print, format);
	if(format == NULL)
	{
		return(-1);
	}
	for (x = 0; format[x] != '\0'; x++)
	{
		if(format[x] != '%')
		{
		_putchar(format[x]);
		}
		else if(format[x +1] == 'c')
		{
			_putchar(va_arg(print, int));
			x++;									  }
		else if(format[x +1] == 's')
		{
			char * betty = (va_arg(print, char *));
		if(betty == NULL)
		{
			betty = "(null)";
		}
		
		v = _puts(betty );
		x++;
		y += (v - 1);
		}
		else if(format[x + 1] == '%')
		{
			_putchar('%');
			x++;
		}
		else if (format[x + 1] =='i')
		{
			num = print_int(print);
			y = y + num;
			x++;
		}
		else if (format[x + 1] == 'd')
		{
    			y += printf_dec(print);
    				x++;
		}
		else if(format[x + 1] == '\0')
		{
			return(-1);
		}
	else
	{
		_putchar(format[x]);
																					}

	y++;
	}
	va_end(print);
	return (y);
}

