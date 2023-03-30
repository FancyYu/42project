/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 19:36:36 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/17 13:46:10 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i --;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str1[] = "http://ww.ttttttt.com";
	char	str2[] = "http://ww.ttttttt.com";
	int c = '\0';

	printf("%p\n", ft_strrchr("teste",'\0'));
	printf("%p\n", strrchr("teste",'\0'));
	return 0;

}*/
