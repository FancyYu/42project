/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 20:28:43 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/22 16:19:20 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			s = s * -1;
		}
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i ++;
	}
	return (r * s);
}

/*int	main(void)
{	const char	str[] = "";//"     -2147483648";
	
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	printf("%d\n%d\n",ft_atoi("+-54"),atoi("+-54"));
	return 0;
}*/
