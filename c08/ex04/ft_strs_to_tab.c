/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 10:40:39 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/08 13:34:54 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					len(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char				*duplicate(char *src)
{
	int		i;
	char	*dest;

	dest = malloc(len(src) * sizeof(char) + 1);
	if (dest == 0)
		return (NULL);
	i = 0;
	while (i < len(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					j;
	struct s_stock_str	*arr;

	i = 0;
	j = ac;
	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (arr == 0)
		return (NULL);
	while (i < j)
	{
		arr[i].size = len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = duplicate(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
