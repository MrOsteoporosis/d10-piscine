/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_whitespaces.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 14:23:49 by averheij       #+#    #+#                */
/*   Updated: 2019/09/19 09:41:59 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wordlength(char *str)
{
	int i;

	i = 0;
	while (!(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src, int length)
{
	char	*cpy;
	int		i;

	cpy = (char*)malloc(sizeof(cpy) * (length + 1));
	i = 0;
	while (i < length)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int		ft_wordcount(char *str)
{
	int		i;
	int		fs;
	int		fe;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13) || i == 0)
		{
			fs = i;
			if (i != 0 || str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
				fs++;
			fe = ft_wordlength(&str[fs]);
			if (fe > 0)
				count++;
		}
		i++;
	}
	return (count);
}

int		ft_wordcopy(char **res, char *str, int pos)
{
	int fe;

	fe = ft_wordlength(str);
	if (fe > 0)
	{
		res[pos] = ft_strdup(str, fe);
		pos++;
	}
	return (pos);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		fs;
	int		pos;
	char	**res;

	pos = 0;
	i = 0;
	res = (char**)malloc(sizeof(char*) * (ft_wordcount(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13) || i == 0)
		{
			fs = i;
			if (i != 0 || str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
				fs++;
			pos = ft_wordcopy(res, &str[fs], pos);
		}
		i++;
	}
	res[pos] = 0;
	return (res);
}
