/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isalnum.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 14:38:40 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/11 14:58:46 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int an)
{
	if (an >= '0' & an <= '9')
		return (1);
	if ((an >= 'a' & an <= 'z') || (an >= 'A' & an <= 'Z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char an;

	an = 'A';
	printf("%d\n", ft_isalnum(an));
	printf("%d\n", isalnum(an));
	return 0;
}*/
