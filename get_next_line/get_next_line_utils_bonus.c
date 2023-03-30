/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/12 14:15:10 by chsun         #+#    #+#                 */
/*   Updated: 2023/02/10 22:48:45 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const	char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dest;
	size_t	len;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s2)
	{
		free(s1);
		return (NULL);
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
	{
		free(s1);
		return (NULL);
	}
	dest = ft_join(s1, s2, dest);
	free(s1);
	return (dest);
}

char	*ft_join(char *s1, char *s2, char *dest)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i ++;
	}
	while (s2[j])
	{
		dest[i] = s2[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}
