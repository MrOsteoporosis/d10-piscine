/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_advanced_sort_wordtab.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 09:51:49 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 09:53:01 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_swap(char **tab, int s1, int s2)
{
	char	*swapptr;

	swapptr = tab[s1];
	tab[s1] = tab[s2];
	tab[s2] = swapptr;
	return (1);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[b], tab[b + 1]) > 0)
				swapped = ft_swap(tab, b, b + 1);
			b++;
		}
	}
}
