/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   doop.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 15:13:50 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 16:49:38 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		main(int argc, char **argv)
{
	char	ops[5];
	int		left;
	int		right;

	ops[0] = '+';
	ops[1] = '-';
	ops[2] = '*';
	ops[3] = '/';
	ops[4] = '%';
	if (argc != 4)
		return (0);
	left = ft_atoi(argv[1]);
	right = ft_atoi(argv[3]);
	if (!right && argv[2][0] == ops[3])
		write(1, "Stop : division by zero\n", 25);
	else if (!right && argv[2][0] == ops[4])
		write(1, "Stop : modulo by zero\n", 23);
	else
		ft_eval(left, argv[2][0], right, ops);
}

void	ft_eval(int left, char opstr, int right, char *ops)
{
	int		i;
	t_op	f[5];
	int		didsmth;

	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	i = 0;
	didsmth = 0;
	while (i < 5)
	{
		if (opstr == ops[i])
		{
			ft_putnbr(f[i](left, right));
			write(1, "\n", 1);
			didsmth = 1;
		}
		i++;
	}
	if (!didsmth)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
}
