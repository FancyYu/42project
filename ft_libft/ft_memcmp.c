/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 20:25:42 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/26 20:45:27 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str1 + i) != *(unsigned char *)(str2 + i))
			return (*(unsigned char *)(str1 + i) -
				*(unsigned char *)(str2 + i));
		i ++;
	}
	return (0);
}

/*int main(void)
{
	const char str1[] = "he123";
	const char str2[] = "hello";
	size_t n = 3;

	printf("%d\n%d\n",ft_memcmp(str1, str2, n), memcmp(str1, str2, n));
	printf("%d\n%d\n", ft_memcmp("t\200", "t\0", 2), memcmp("t\200", "t\0", 2));
	return 0;
}*/
