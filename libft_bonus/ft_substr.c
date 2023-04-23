/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 17:53:13 by chsun         #+#    #+#                 */
/*   Updated: 2022/11/03 19:40:08 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sl;
	size_t	i;

	i = 0;
	sl = ft_strlen(s);
	if (start > sl)
		return (ft_strdup(""));
	if (len > sl - start)
		len = sl - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i ++;
	}
	sub[i] = '\0';
	return (sub);
}

/*int main(void)
{
	char const s[] = "123456789qwertyuio";
	printf("%s\n", ft_substr(s,0, 10));
	printf("%s\n%p\n", ft_substr("hola", 5, 2),ft_substr("hola", 5, 2));
	return 0;
}*/
