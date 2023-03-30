/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 19:50:52 by chsun         #+#    #+#                 */
/*   Updated: 2023/02/24 19:50:55 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*set_str(unsigned int hex, int *len)
{
	int				i;
	char			*str;
	unsigned long	hex_value;

	i = 0;
	hex_value = hex;
	while (hex_value != 0)
	{
		hex_value = hex_value / 16;
		i ++;
	}
	str = calloc(i + 1, sizeof(char));
	*len = i;
	return (str);
}

int	ft_print_hex(unsigned int hex, int asc_value)
{
	unsigned long	hex_value;
	char			*str;
	int				len;
	int				*lp;

	lp = &len;
	hex_value = hex;
	str = set_str(hex, lp);
	if (!str)
		return (0);
	while (hex_value != 0 && --len >= 0)
	{
		if ((hex_value % 16) < 10)
			str[len] = (hex_value % 16) + 48;
		else
			str[len] = (hex_value % 16) + asc_value;
		hex_value = hex_value / 16;
	}
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	if (hex == 0)
		len += ft_print_char('0');
	return (len);
}
