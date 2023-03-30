/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_unsigned.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 19:50:27 by chsun         #+#    #+#                 */
/*   Updated: 2023/02/24 19:50:29 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_unsigned(unsigned int nbr)
{
	if (nbr <= 9)
	{
		ft_putchar_fd(nbr + 48, 1);
		return ;
	}
	else
		put_unsigned(nbr / 10);
	put_unsigned(nbr % 10);
}

int	ft_print_unsigned(unsigned int nbr)
{
	unsigned int	i;

	i = 1;
	put_unsigned(nbr);
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i ++;
	}
	return (i);
}
