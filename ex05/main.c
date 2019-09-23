/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 13:14:50 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 14:40:23 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		diff(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int				*tab;
	unsigned long	i;
	int				(*f)(int, int);

	f = &diff;
	tab = (int*)malloc(sizeof(int) * 30);
	i = 0;
	while (i < 30)
	{
		tab[i] = 50 - i;
		i++;
	}
	i = 0;
	while (i < 30)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("%d ", ft_is_sort(tab, 30, f));
	printf("\n");
}
