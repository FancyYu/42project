/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 14:59:04 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/13 16:34:07 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;

	str = "hello1234567";
	printf("%lu\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	printf("%s\n", str);
	return 0;
}*/
