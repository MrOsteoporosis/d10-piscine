# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/09/23 15:11:15 by averheij       #+#    #+#                 #
#    Updated: 2019/09/23 16:43:04 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ft_atoi.c ft_putnbr.c ft_math.c doop.c 

LIB = ft

all: $(NAME)

$(NAME):
	gcc -Werror -Wall -Wextra -o $(NAME) $(SRC) -L. -l$(LIB)

clean:
	rm -f $(NAME)