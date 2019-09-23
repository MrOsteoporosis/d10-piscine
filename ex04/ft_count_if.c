/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_if.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 13:46:40 by averheij       #+#    #+#                */
/*   Updated: 2019/09/23 13:49:03 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		c;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
