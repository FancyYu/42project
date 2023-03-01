/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 16:48:36 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/13 17:12:26 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 & c <= 122)
		c = c - 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	i = 0;
	int j = 0;
	char	c = 'a';
	char	str1[] = "Hello123+= ";
	char	str2[] = "Hello123+= ";

	while(str1[i])
	{
		putchar(ft_toupper(str1[i]));
		i ++;
	}
	putchar('\n');
	while(str2[j])
	{
		putchar(toupper(str2[j]));
		j ++;
	}
	printf("\n%c%c\n", ft_toupper(c), toupper(c));
	return 0;
}*/
