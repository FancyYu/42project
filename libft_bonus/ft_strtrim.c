/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/05 17:04:12 by chsun         #+#    #+#                 */
/*   Updated: 2022/11/08 21:21:39 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	get_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while ((start < ft_strlen(s1)) && ft_strchr(set, s1[start]))
		start ++;
	return (start);
}

static	int	get_end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end - 1]))
		end --;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	str_len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str_len = end - start;
	str = ft_substr(s1, start, str_len);
	return (str);
}

/*int main(void)
{
    char const s1[] = "12334 abcdersy 4321";
    char const set[] = "1234";
    printf("%s\n%p\n", ft_strtrim(s1, set), ft_strtrim(s1, set));
    printf("%s\n%p\n", ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"),
		ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
    printf("%s\n%p\n", ft_strtrim("", " \n\t"), ft_strtrim("", " \n\t"));
    return (0);
}*/
