/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 16:04:36 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 16:46:03 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int		ft_atoi(char *str)
{
	int		i;
	int		lastint;
	int		negative;

	negative = 0;
	lastint = 0;
	i = 0;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	if (str[i] == '-' && negative != -1)
	{
		negative = -1;
		i++;
		if (str[i] == '+')
			return (0);
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		lastint = lastint * 10 + str[i] - '0';
		i++;
	}
	negative == -1 ? lastint = (lastint * -1) : i++;
	return (lastint);
}
