/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isascii.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:59:24 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/12 17:20:12 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int ac)
{
	if (ac >= 0 & ac <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char ac;

	ac = 0x7e;
	printf("%d\n",ft_isascii(ac));
	printf("%d\n",isascii(ac));
	printf("%c\n",ac);
	return 0;
}*/
