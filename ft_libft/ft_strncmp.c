/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 14:39:47 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/17 15:33:31 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		c1 = str1[i];
		c2 = str2[i];
		if (c1 != c2)
			return (c1 - c2);
		i ++;
	}
	return (0);
}

/*int	main(void)
{
	char str1[] = "test\200";
	char str2[] = "test\0";
	unsigned char a = '\200';
	unsigned char b = '\0';
	size_t n = 6;

	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", strncmp(str1, str2, n));
	printf("%zu\n%c\n%d\n", n,'\200',(a - b));
	return 0;
}*/
