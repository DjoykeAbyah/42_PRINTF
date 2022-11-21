/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 19:59:06 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/18 18:16:50 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int			i;
	char		c;
	va_list		arg;
	int			count;
	char		*string;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(arg, unsigned int);
				count += write(1, &c, 1);
			}
			else if (format[i] == 's')
				count += write(1, va_arg(arg, char *), ft_strlen(string));
			// if (format[i + 1] == 'p')
			// {
			// }
			// if (format[i + 1] == 'd')
			// {
			// }
			else if (format[i] == 'i')
				count += print_nbr(va_arg(arg, int), 1);
			// if (format[i + 1] == 'u')
			// {
			// }
			// if (format[i + 1] == 'x')
			// {
			// }
			// if (format[i + 1] == 'X')
			// {
			// }
			else if (format[i] == '%')
				count += print_char('%', 1);
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end (arg);
	return (count);
}

/*
Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository

  %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

va_start function
is a macro defined 
in the stdarg header file in the C Programming languages. 
The va_start() function is used to initialize the argument list. 
The argument list is referred to by ap. 
Initializing the argument list is necessary 
before using the va_arg() and va_end() functions in the program

va_list
is a complete object type suitable for holding 
the information needed by the macros va_start, 
va_copy, va_arg, and va_end. 
If a va_list instance is created, 
passed to another function, 
and used via va_arg in that function, 
then any subsequent use in the calling 
function should be preceded by a call to va_end

va_arg function 
fetches an argument in a variable argument list.
The va_arg function updates ap so that 
the next call to the va_arg function fetches the next argument. 
You must call the va_start function 
to initialize ap before using the va_arg function

va_end function(va_list ap) 
allows a function with variable arguments 
which used the va_start macro to return. 
If va_end is not called before returning from the function, 
the result is undefined.
ap − This is the va_list object previously 
initialized by va_start in the same function.
*/