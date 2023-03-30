/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_string.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 19:48:32 by chsun         #+#    #+#                 */
/*   Updated: 2023/02/24 19:49:05 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
		i ++;
	ft_putstr_fd(str, 1);
	return (i);
}
