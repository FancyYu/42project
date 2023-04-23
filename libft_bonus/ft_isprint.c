/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isprint.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 18:58:19 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/12 19:33:22 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int p)
{
	if (p >= 32 & p <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	p;

	p = 0x7f;
	printf("%d\n", ft_isprint(p));
	printf("%d\n", isprint(p));
	printf("%c", p);
	return 0;
}*/
