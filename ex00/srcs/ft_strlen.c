/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:46:14 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 12:59:50 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
