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

SRCS = ft_isascii.c ft_strchr.c ft_strncmp.c ft_toupper.c \
		ft_atoi.c ft_isdigit.c ft_strlcat.c ft_strnstr.c \
		ft_isalnum.c ft_isprint.c ft_strlcpy.c ft_strrchr.c \
		ft_isalpha.c ft_memset.c ft_strlen.c ft_tolower.c \
		ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_split.c ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

BONUS = ft_lstadd_front.c ft_lstadd_back.c \
		ft_lstlast.c ft_lstdelone.c \
		ft_lstnew.c ft_lstclear.c \
		ft_lstsize.c ft_lstiter.c ft_lstmap.c \

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus