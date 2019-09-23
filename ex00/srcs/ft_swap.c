/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 12:57:30 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 12:59:52 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
