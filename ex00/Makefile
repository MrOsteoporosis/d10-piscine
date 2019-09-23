# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/09/23 11:33:51 by averheij       #+#    #+#                 #
#    Updated: 2019/09/23 13:04:04 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

_SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SDIR = ./srcs
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

IDIR =  includes

OBJ = $(patsubst %.c,%.o,$(_SRC))

all: $(NAME)

$(NAME):
	gcc -iquote$(IDIR) -Werror -Wall -Wextra -c $(SRC)
	ar rc libft.a $(OBJ)
	ranlib libft.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all