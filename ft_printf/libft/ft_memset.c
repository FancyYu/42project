/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 15:23:33 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/20 20:28:14 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(str + i) = c;
		i ++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[10] = "hello";
	char str2[10] = "hello";
	size_t n = 9;
	int c = '1';

	printf("%p\n%s\n", ft_memset(str1, c, n), str1);
	printf("%p\n%s\n", memset(str2, c, n), str2);
	return 0;
}*/
