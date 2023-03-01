/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 19:51:00 by chsun         #+#    #+#                 */
/*   Updated: 2022/10/27 20:48:25 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*cal;

	cal = (void *)malloc(nitems * size);
	if (!cal)
		return (NULL);
	ft_bzero(cal, nitems * size);
	return (cal);
}

/*int	main(void)
{
	size_t n = 3;
	char	*str;
	char	*s;
	char	*ptr = "12345";

	str = (char *)ft_calloc(n, 0);
	s = (char *)calloc(n, 0);
	memmove(str,ptr,n);
	memmove(s,ptr,n);
	printf("%s\n%s\n", str, s);
	return 0;
}*/
