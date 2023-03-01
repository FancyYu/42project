/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isalpha.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 12:40:01 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/11 14:14:03 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' & c <= 'z') || (c >= 'A' & c <= 'Z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	c;

	c = 'a';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return 0;
}*/
