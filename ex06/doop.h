/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   doop.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 15:39:07 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 16:45:50 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>
# include "ft_libft.h"
# include "ft_atoi.h"
# include "ft_putnbr.h"
# include "ft_math.h"

void	ft_eval(int left, char opstr, int right, char *ops);
int		main(int argc, char **argv);
typedef	int		(*t_op)(int, int);
#endif
