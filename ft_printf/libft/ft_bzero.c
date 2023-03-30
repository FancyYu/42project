/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 17:28:05 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/25 19:42:17 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i ++;
	}
}

/*int	main(void)
{
	char s1[10] = "hello";
	char s2[10] = "hello";
	size_t n = 7;
	ft_bzero(s1,n);
	bzero(s2,n);
	printf("%s\n%s\n", s1, s2);
	return 0;
}*/
