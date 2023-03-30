/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/12 13:14:31 by chsun         #+#    #+#                 */
/*   Updated: 2022/12/17 19:11:01 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*read_line(int fd, char *save_line_cp)
{
	int		read_nb;
	char	*read_buffer;

	read_nb = 1;
	read_buffer = malloc((1 + BUFFER_SIZE) * sizeof(char));
	if (!read_buffer)
	{
		free(save_line_cp);
		return (NULL);
	}
	while (!ft_strchr(save_line_cp, '\n') && read_nb != 0)
	{
		read_nb = read(fd, read_buffer, BUFFER_SIZE);
		if (read_nb < 0)
		{
			free(read_buffer);
			free(save_line_cp);
			return (NULL);
		}
		read_buffer[read_nb] = '\0';
		save_line_cp = ft_strjoin(save_line_cp, read_buffer);
	}
	free(read_buffer);
	return (save_line_cp);
}

char	*ft_get_line(char *save_line_cp)
{
	int		i;
	char	*one_line;

	i = 0;
	if (!save_line_cp[i])
		return (NULL);
	while (save_line_cp[i] && save_line_cp[i] != '\n')
		i++;
	i += (save_line_cp[i] == '\n');
	one_line = (char *)malloc((i + 1) * sizeof(char));
	if (!one_line)
		return (NULL);
	one_line[i--] = '\0';
	while (i >= 0 && save_line_cp[i])
	{
		one_line[i] = save_line_cp[i];
		i--;
	}
	return (one_line);
}

char	*get_new_line(char *save_line_cp)
{
	int		start;
	int		i;
	char	*new_save_line_cp;

	if (!save_line_cp)
		return (NULL);
	start = 0;
	i = 0;
	while (save_line_cp[i] && save_line_cp[i] != '\n')
		i++;
	if (!save_line_cp[i])
		return (free(save_line_cp), NULL);
	i += (save_line_cp[i] == '\n');
	new_save_line_cp = (char *)malloc(1 + ft_strlen(save_line_cp) - i);
	if (!new_save_line_cp)
		return (free(save_line_cp), NULL);
	while (save_line_cp[i])
	{
		new_save_line_cp[start] = save_line_cp[i];
		start++;
		i++;
	}
	new_save_line_cp[start] = '\0';
	free(save_line_cp);
	return (new_save_line_cp);
}

char	*get_next_line(int fd)
{
	static char	*save_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	save_line = read_line(fd, save_line);
	if (!save_line)
		return (NULL);
	line = ft_get_line(save_line);
	if (!line)
	{
		free(save_line);
		save_line = NULL;
		return (NULL);
	}
	save_line = get_new_line(save_line);
	return (line);
}
