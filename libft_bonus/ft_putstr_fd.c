/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 15:07:54 by chsun         #+#    #+#                 */
/*   Updated: 2022/11/16 15:23:56 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, s + i, sizeof(char));
		i ++;
	}
}

/*int main(void)
{
	char *s = "\0";
	ft_putstr_fd(s, 1);
}*/
