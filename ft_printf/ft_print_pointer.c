/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_pointer.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 19:49:20 by chsun         #+#    #+#                 */
/*   Updated: 2023/02/24 19:49:24 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*set_str(unsigned long ptr, int *len)
{
	int				i;
	char			*str;
	unsigned long	ptr_value;

	i = 0;
	ptr_value = ptr;
	while (ptr_value != 0)
	{
		ptr_value = ptr_value / 16;
		i ++;
	}
	str = calloc(i + 1, sizeof(char));
	*len = i;
	return (str);
}

int	ft_print_pointer(unsigned long ptr, int asc_value)
{
	unsigned long	ptr_value;
	char			*str;
	int				len;
	int				*lp;

	lp = &len;
	ptr_value = ptr;
	str = set_str(ptr, lp);
	if (!str)
		return (0);
	while (ptr_value != 0 && --len >= 0)
	{
		if ((ptr_value % 16) < 10)
			str[len] = (ptr_value % 16) + 48;
		else
			str[len] = (ptr_value % 16) + asc_value;
		ptr_value = ptr_value / 16;
	}
	len = ft_strlen(str);
	len = len + ft_print_string("0x");
	ft_putstr_fd(str, 1);
	free(str);
	if (ptr == 0)
		len += ft_print_char('0');
	return (len);
}
