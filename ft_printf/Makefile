# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: chsun <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/22 18:22:20 by chsun         #+#    #+#                  #
#    Updated: 2022/10/22 18:51:18 by chsun         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT = ./libft

SRCS = 	ft_printf.c \
		ft_print_pointer.c \
		ft_print_unsigned.c \
		ft_print_string.c \
		ft_print_int.c \
		ft_print_char.c \
		ft_print_hex.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f $(OBJS)
	@cd $(LIBFT) && make clean
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFT) && make fclean
	
re: fclean all
