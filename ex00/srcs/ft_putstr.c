/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 09:13:22 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 12:59:46 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
