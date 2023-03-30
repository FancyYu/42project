/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 19:42:19 by chsun         #+#    #+#                 */
/*   Updated: 2023/02/24 19:42:28 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(const char *print, void *arg)
{
	int	i;

	i = 0;
	if (*print == 'c')
		i += ft_print_char((char)arg);
	else if (*print == 's')
		i += ft_print_string((char *)arg);
	else if (*print == 'p')
		i += ft_print_pointer((unsigned long)arg, 87);
	else if (*print == 'd')
		i += ft_print_int((int)arg);
	else if (*print == 'i')
		i += ft_print_int((int)arg);
	else if (*print == 'u')
		i += ft_print_unsigned((unsigned int)arg);
	else if (*print == 'x')
		i += ft_print_hex((unsigned long)arg, 87);
	else if (*print == 'X')
		i += ft_print_hex((unsigned long)arg, 55);
	return (i);
}

int	ft_printf(const char *print, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, print);
	while (*print != '\0')
	{
		if (*print == '%' && *(print + 1) != '\0')
		{
			print ++;
			if (ft_strchr("cspdiuxX", *print))
				i += check_format(print, va_arg(args, void *));
			else if (*print == '%')
				i += ft_print_char('%');
			else
				break ;
		}
		else if (*print != '%')
			i += ft_print_char(*print);
		print ++;
	}
	va_end(args);
	return (i);
}
