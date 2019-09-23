/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 13:51:46 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 14:37:19 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ascending(int a, int b, int (*f)(int, int))
{
	if (f(a, b) > 0)
		return (1);
	else
		return (0);
}

int		descending(int a, int b, int (*f)(int, int))
{
	if (f(a, b) < 0)
		return (1);
	else
		return (0);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		(*s[2])(int, int, int (*f)(int, int));
	int		asde;

	s[0] = &ascending;
	s[1] = &descending;
	i = 0;
	if (f(tab[i], tab[i + 1]) < 0)
		asde = 1;
	else
		asde = 0;
	while (i < length - 1)
	{
		if (!s[asde](tab[i], tab[i + 1], f))
			return (0);
		i++;
	}
	return (1);
}
