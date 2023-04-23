/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 17:46:18 by chsun         #+#    #+#                 */
/*   Updated: 2022/11/19 18:02:40 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_count(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s || !s[0])
		return (0);
	while (s[i] && s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			count ++;
		i ++;
	}
	if (s[0] == c)
		count --;
	return (count +1);
}

static	char	**ft_free(char **str_array)
{
	int	i;

	i = 0;
	while (str_array[i])
	{
		free(str_array[i]);
		i ++;
	}
	free(str_array);
	return (NULL);
}

static	void	ft_get_str(char	**str, size_t *str_len, char c)
{
	size_t	i;

	*str = *str + *str_len;
	*str_len = 0;
	i = 0;
	while (**str && **str == c)
		(*str)++;
	while ((*str)[i])
	{
		if ((*str)[i] == c)
			return ;
		(*str_len)++;
		i ++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	char	*str;
	int		count;
	int		i;
	size_t	str_len;

	str = (char *)s;
	count = get_count(str, c);
	str_array = (char **) malloc(sizeof(char *) * (count + 1));
	if (!str_array)
		return (NULL);
	i = 0;
	str_len = 0;
	while (i < count)
	{
		ft_get_str(&str, &str_len, c);
		str_array[i] = (char *) malloc(sizeof(char) * (str_len + 1));
		if (!str_array[i])
			return (ft_free(str_array));
		ft_strlcpy(str_array[i], str, str_len + 1);
		i ++;
	}
	str_array[i] = NULL;
	return (str_array);
}

/*int	main(void)
{
	char const *s = "cc123c456cc789ccc";
	char c = 'c';
	char **str;
	int i;

	i = 0;
	str = ft_split(s, c);
	while (str[i])
	{
		printf("%s\n", str[i]);
		i ++;
	}
	return 0;
}*/