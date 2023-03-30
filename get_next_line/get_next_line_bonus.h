/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/12 14:06:12 by chsun         #+#    #+#                 */
/*   Updated: 2022/12/12 16:25:48 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const	char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_join(char *s1, char *s2, char *dest);
char	*read_line(int fd, char *save_line_cp);
char	*ft_get_line(char *save_line_cp);
char	*get_new_line(char *save_line_cp);

#endif
