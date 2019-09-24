/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 09:35:17 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 09:40:04 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_wordtab(char **tab);

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char	**tab;
	int		i;

	tab = ft_split_whitespaces(argv[argc - 1]);
	i = 0;
	while (tab[i])
		printf("%s \n", tab[i++]);
	ft_sort_wordtab(tab);
	i = 0;
	while (tab[i])
		printf("%s \n", tab[i++]);
}
