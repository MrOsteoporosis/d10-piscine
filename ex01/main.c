/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 13:14:50 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 13:28:46 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void		plusone(int a)
{
	printf("%d ", a + 1);
}

int		main(void)
{
	int				*tab;
	unsigned long	i;
	void			(*f)(int);

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
	ft_foreach(tab, 30, f);
	i = 0;
	printf("\n");
}
