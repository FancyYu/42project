/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isdigit.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:53:47 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/11 14:36:05 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int d)
{
	if (d >= '0' & d <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	d;

	d = '0';
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", isdigit(d));
	return 0;
}*/
