# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/09/23 15:11:15 by averheij       #+#    #+#                 #
#    Updated: 2019/09/24 10:10:05 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = ft_atoi.c ft_putnbr.c ft_math.c doop.c 
_LIB = ft

LIB = libft.a
_LIB_SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
LIB_SDIR = ./srcs
LIB_SRC = $(patsubst %,$(LIB_SDIR)/%,$(_LIB_SRC))
LIB_IDIR =  includes
LIB_OBJ = $(patsubst %.c,%.o,$(_LIB_SRC))

all: $(NAME)

$(NAME):
	gcc -iquote$(LIB_IDIR) -Werror -Wall -Wextra -c $(LIB_SRC)
	ar rc $(LIB) $(LIB_OBJ)
	ranlib $(LIB)
	gcc -Werror -Wall -Wextra -o $(NAME) $(SRC) -L. -l$(_LIB)

clean:
	rm -f $(NAME)
	rm -f $(LIB_OBJ)
	rm -f $(LIB)
