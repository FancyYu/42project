/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 17:31:56 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/19 20:52:29 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t s_dest)
{
	size_t	i;

	i = 0;
	if (s_dest > 0)
	{
		while ((s_dest > 0) && (i < (s_dest - 1)) && src[i])
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i ++;
	return (i);
}

/*#include <unistd.h>

int	main(void)
{
	char dest1[] = "123";
	char dest2[] = "123"; 
	const char	src[] = "lorem ipsum dolor sit amet";
	size_t s_dest = 4;

	printf("%lu\n%s\n", ft_strlcpy(dest1, src, s_dest), dest1);
	printf("%lu\n%s\n", strlcpy(dest2, src, s_dest), dest2);
	write(1, dest1, 15);
	write(1, "\n", 1);
	write(1, dest2, 15);
	return 0;
}*/
