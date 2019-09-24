/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 09:35:17 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 10:02:44 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));

char	**ft_split_whitespaces(char *str);

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

int		main(int argc, char **argv)
{
	char	**tab;
	int		i;
	int 	(*cmp)(char *, char *);

	tab = ft_split_whitespaces(argv[argc - 1]);
	i = 0;
	while (tab[i])
		printf("%s \n", tab[i++]);
	cmp = &ft_strcmp;
	ft_advanced_sort_wordtab(tab, cmp);
	i = 0;
	while (tab[i])
		printf("%s \n", tab[i++]);
}
