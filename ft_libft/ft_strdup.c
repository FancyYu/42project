/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 20:52:31 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/28 18:04:56 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)malloc(ft_strlen(str) + 1);
	if (!s)
		return (NULL);
	while (str[i])
	{
		s[i] = str[i];
		i ++;
	}
	s[i] = '\0';
	return (s);
}

/*int	main(void)
{
	char *str = "111";
	char *s;
	char *s2;

	s = ft_strdup(str);
	s2 = strdup(str);
	printf("%s\n%s\n", s, s2);
	return 0;
}*/
