/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:45:09 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/26 20:24:21 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char)c)
			return ((char *)(str + i));
		i ++;
	}
	return (NULL);
}

/*int main(void)
{
    const char str[] = "hello";
	int	tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    int c = 'e';
    size_t n = 3;
    printf("%s\n%p\n", ft_memchr(str, c, n),ft_memchr(str, c, n));
    printf("%s\n%p\n", memchr(str, c, n),memchr(str, c, n));
	printf("%s\n%s\n%s\n", (char *)ft_memchr(tab, -1, 7), 
		(char *)memchr(tab, -1, 7), (char *)tab);
    return 0;
}*/
