/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:09:05 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/05 13:45:11 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		totalen(int ac, char **av, char *sep)
{
	int i;
	int total;
	int sp;

	i = 0;
	total = 0;
	sp = len(sep);
	while (i < ac)
	{
		if (i < ac - 1)
		{
			total += len(av[i]);
			total += sp;
		}
		else
			total += len(av[i]);
		i++;
	}
	return (total);
}

char	*concat(char *dest, char *src)
{
	int i;
	int j;
	int index;

	i = len(dest);
	j = len(src);
	index = 0;
	while (index < j && src[index] != '\0')
	{
		dest[i + index] = src[index];
		index++;
	}
	dest[i + index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*base;
	int		i;

	if (size == 0)
	{
		base = malloc(sizeof(char));
		*base = 0;
		return (base);
	}
	if (!(base = malloc(sizeof(char) * totalen(size, strs, sep))))
		return (NULL);
	*base = 0;
	i = 0;
	while (i < size)
	{
		concat(base, strs[i]);
		if (i < size - 1)
			concat(base, sep);
		i++;
	}
	return (base);
}
