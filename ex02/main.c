/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 13:14:50 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 13:34:32 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int		plusone(int a)
{
	return (a + 1);
}

int		main(void)
{
	int				*tab;
	int				*res;
	unsigned long	i;
	int				(*f)(int);

	f = &plusone;
	tab = (int*)malloc(sizeof(int) * 30);
	i = 0;
	while (i < 30)
	{
		tab[i] = i;
		i++;
	}
	i = 0;
	while (i < 30)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	res = ft_map(tab, 30, f);
	i = 0;
	while (i < 30)
	{
		printf("%d ", res[i]);
		i++;
	}
	printf("\n");
}
