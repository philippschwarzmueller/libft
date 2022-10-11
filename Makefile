# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pschwarz <pschwarz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 14:05:01 by pschwarz          #+#    #+#              #
#    Updated: 2022/10/11 15:52:44 by pschwarz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
