/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 19:41:46 by chsun         #+#    #+#                 */
/*   Updated: 2022/11/03 20:59:27 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, (ft_strlen(s1) + 1));
	ft_strlcat(dest, s2, (len + 1));
	return (dest);
}

/*int main(void)
{
	char const s1[] = "hello";
	char const s2[] = "12345";

	printf("%s\n", ft_strjoin(s1, s2));
	return 0;
}*/
