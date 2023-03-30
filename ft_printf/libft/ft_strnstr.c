/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strnstr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:59:21 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/19 17:30:12 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[i])
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] && s2[j] && i + j < n && s1[i + j] == s2[j])
			j ++;
		if (!s2[j])
			return ((char *)(s1 + i));
		i ++;
	}
	return (NULL);
}

/*#include <string.h>
int	main(void)
{
	char	s1[] = "hello12hhha1112333";
	char	s2[] = "he";
	size_t n = 2;

	printf("%s\n%p\n", ft_strnstr(s1, s2, n), ft_strnstr(s1, s2, n));
	printf("%s\n%p", strnstr(s1, s2, n), strnstr(s1, s2, n));
	return 0;
}*/

/*if (s1[i] == s2[j])
		{
			while (s2[j] && ((i + j) < n))
			{
				if (s1[i + j] != s2[j])
				{
					i ++;
					break ;
				}
				if (s1[i + j] == s2[j] && !s2[j + 1])
					return ((char *)(s1 + i));
				j ++;
			}
		}
		else
			i ++;*/
