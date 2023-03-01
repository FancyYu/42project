/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/09 19:54:06 by chsun         #+#    #+#                 */
/*   Updated: 2022/11/15 19:03:27 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_len(int n)
{
	int	len;
	int	nem;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len ++;
		nem = n * -1;
	}
	else
		nem = n;
	while (nem > 9)
	{
		nem = nem / 10;
		len ++;
	}
	len ++;
	return (len);
}

static	char	*get_str(int n, char *str, int len)
{
	str[len] = '\0';
	if (n == -2147483648)
	{
		str[len - 1] = '8';
		n = -214748364;
		len --;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 9)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len --;
	}
	str[len - 1] = n + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = get_len(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = get_str(n, str, len);
	return (str);
}

/*int main(void)
{
	int n = 123;
	printf("%s",ft_itoa(n));
	return 0;
}*/
