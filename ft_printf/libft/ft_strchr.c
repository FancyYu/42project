/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 19:40:19 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/17 13:49:24 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i ++;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
}

/*int	main(void)
{
	char	str1[] =  "http://ww.ttttttt.com";
	char	str2[] =  "http://ww.ttttttt.com";
	int	c = '\0';
	
	printf("%s\n", ft_strchr(((void *)0), '\0'));
	printf("%s\n", strchr(((void *)0), '\0'));
	return 0;
}*/
