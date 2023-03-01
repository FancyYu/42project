/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 19:57:16 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/25 20:26:47 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i ++;
	}
	return (dest);
}

/*int	main(void)
{
	size_t n = 2;
	char s1[] = "hello";
	char s2[] = "hello";
	char d1[] = "123";
	char d2[] = "123";

	//ft_memcpy(((void *)0), "segfaulter tu dois", 17);
	//memcpy(((void *)0), "segfaulter tu dois", 17);
	printf("%s\n", ft_memcpy(((void *)0), ((void *)0), 3));
	printf("%s\n", memcpy(((void *)0), ((void *)0), 3));
	return 0;
}*/
