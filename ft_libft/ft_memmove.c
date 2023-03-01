/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 19:27:07 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/28 18:08:39 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t n)
{
	size_t	i;

	if (!dest && !str)
		return (NULL);
	if (dest > str)
	{
		while (n > 0)
		{
			*(char *)(dest + (n - 1)) = *(char *)(str + (n - 1));
			n --;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(str + i);
			i ++;
		}
	}
	return (dest);
}

/*int main(void)
{
	size_t n = 5;
	const char str1[] = "thi\xc3\x9f \xc3\x9f\xde\
	xad\xbe\xeftri\xc3\xb1g will be \xc3\xb8v\xc3\xa9rlap !\r\n";
	const char str2[] = "";
	char dest1[] = "1234567890";
	char dest2[] = "1234567890";
	printf("%s\n", ft_memmove(dest1+3, dest1, n));
	printf("%s\n", memmove(dest2+3, dest2, n));
	printf("%s\n", ft_memmove(dest1, ((void *)0), 5)); 
	printf("%s\n",memmove(dest2, ((void *)0), 5));
	return 0;
}*/
