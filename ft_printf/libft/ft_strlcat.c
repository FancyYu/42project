/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 20:52:59 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/19 21:12:46 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t s_dest)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	while (((i + j) < (s_dest - 1)) && src[j] && (s_dest > 0))
	{
		dest[i + j] = src[j];
		j ++;
	}
	dest [i + j] = '\0';
	if (i > s_dest)
		i = s_dest;
	while (src[j])
		j ++;
	return (i + j);
}

/*#include <unistd.h>

int	main(void)
{
	char dest1[10] = "45";
	char dest2[10] = "45";
	const char	src[] = "0123678911";
	size_t s_dest = 10;

	printf("%lu\n%s\n", ft_strlcat(dest1, src, s_dest), dest1);
	printf("%lu\n%s\n", strlcat(dest2, src, s_dest), dest2);
	write(1, dest1, 15);
	write(1, "\n", 1);
	write(1, dest2, 15);
	return 0;
}*/
