/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chsun <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 16:19:55 by chsun         #+#    #+#                 */
/*   Updated: 2023/02/21 16:20:01 by chsun         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_print_char(char c);
int	ft_print_int(int n);
int	ft_print_string(char *str);
int	ft_print_pointer(unsigned long ptr, int asc_value);
int	ft_print_unsigned(unsigned int nbr);
int	ft_print_hex(unsigned int hex, int asc_value);
int	ft_printf(const char *print, ...);

#endif