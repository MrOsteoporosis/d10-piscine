/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 11:48:27 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 12:59:48 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
