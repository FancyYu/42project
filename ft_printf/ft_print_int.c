/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_int.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 19:49:59 by chsun         #+#    #+#                 */
/*   Updated: 2023/02/24 19:50:02 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int				nb;
	unsigned int	i;

	i = 1;
	nb = n;
	if (nb < 0 && nb != -2147483648)
	{
		nb = -n;
		i ++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i ++;
	}
	ft_putnbr_fd(n, 1);
	if (nb == -2147483648)
		return (11);
	return (i);
}
