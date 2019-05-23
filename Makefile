# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imokoka <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 11:18:44 by imokoka           #+#    #+#              #
#    Updated: 2019/05/23 11:24:53 by imokoka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_*.c

INC = includes

OUTPUT = ft_*.o

all: $(NAME)

$(NAME):
		@gcc -Wall -Werror -Wextra -c $(SRC) -I $(INC)
		@ar rc $(NAME) $(OUTPUT)
		@ranlib $(NAME)

clean:
		@/bin/rm -f $(OUTPUT)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
