# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druina <druina@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 13:40:59 by druina            #+#    #+#              #
#    Updated: 2022/12/05 09:22:58 by druina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRC = ft_printf.c print_c.c print_nbr_u.c print_nbr.c print_p.c print_s.c print_x.c

OBJECT = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h


.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	cd libft && make
	cc $(FLAGS) -c $(SRC) -I $(HEADER)
	cd libft && mv libft.a ..
	mv libft.a $(NAME)
	ar -rcs $(NAME) $(OBJECT)
	@echo "\033[31mYOU'RE MY DADDY! YOU JUST MADE ME!"
	@echo "$$MONKEY"
	@echo "I LOOK LIKE YOU! LET'S PLAY, RUN ME!"


clean:
	cd libft && make clean
	rm -f $(OBJECT)
	@echo "\033[31mNO DON'T DO IT, NO!!!!\033[39m"


fclean: clean
	rm -f $(NAME)
	cd libft && make fclean
	@echo "\033[31mWHY YOU KILL ME?!"
	@echo "$$KILL\033[39m"


re: fclean all


define MONKEY
     w  c(..)o    (
      \__(-)    __)
          /\   (
         /(_)___)
        w /|
         | |
         m  m
endef
export MONKEY

define KILL
              _
             | |
             | |===( )   //////
             |_|   |||  | o o|
                    ||| ( c  )                  ____
                     ||| \= /                  ||   \_
                      ||||||                   ||     |
                      ||||||                ...||__/|-"
                      ||||||             __|________|__
                        |||             |______________|
                        |||             || ||      || ||
                        |||             || ||      || ||
------------------------|||-------------||-||------||-||-------
                        |__>            || ||      || ||
endef
export KILL
