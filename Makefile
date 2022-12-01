# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druina <druina@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 13:40:59 by druina            #+#    #+#              #
#    Updated: 2022/12/01 09:24:58 by druina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c print_c.c print_nbr_u.c print_nbr.c print_p.c print_s.c print_x.c

LIBFTSRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c\
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c get_next_line.c get_next_line_multiple.c ft_putchar.c\
ft_putstr.c ft_putnbr.c ft_nbrlen.c ft_putnbr_unsigned.c ft_nbrtohex.c ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c


OBJECT = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(SRC)
	cd libft && make
	cc $(FLAGS) -c $(SRC) -I $(HEADER)
	cd libft && mv libft.a ..
	mv libft.a $(NAME)
	ar -rcs $(NAME) $(OBJECT)


clean:
	cd libft && make clean
	rm -f $(OBJECT)


fclean: clean
	rm -f $(NAME)
	cd libft && make fclean


re: fclean all
