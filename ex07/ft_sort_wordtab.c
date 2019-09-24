/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_wordtab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 09:26:36 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 09:48:51 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_swap(char **tab, int s1, int s2)
{
	char	*swapptr;

	swapptr = tab[s1];
	tab[s1] = tab[s2];
	tab[s2] = swapptr;
	return (1);
}

void	ft_sort_wordtab(char **tab)
{
	int		a;
	int		b;
	int		swapped;
	int		length;

	a = 0;
	swapped = 1;
	length = 0;
	while (tab[length])
		length++;
	while (swapped)
	{
		swapped = 0;
		b = 0;
		while (b < length - 1)
		{
			if (ft_strcmp(tab[b], tab[b + 1]) > 0)
				swapped = ft_swap(tab, b, b + 1);
			b++;
		}
	}
}
