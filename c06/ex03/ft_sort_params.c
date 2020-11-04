/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:55:45 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/04 16:26:43 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		size1;
	int		size2;
	int		index;

	index = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	while (s1[index] && s2[index])
	{
		if (s1[index] < s2[index])
			return (-1);
		else if (s1[index] > s2[index])
			return (1);
		else
			index++;
	}
	if (size1 > size2)
		return (1);
	else if (size1 == size2)
		return (0);
	else
		return (-1);
}

void	ft_print(int len, char **str)
{
	int i;
	int j;

	i = 1;
	while (i < len)
	{
		j = 0;
		while (j < ft_strlen(str[i]))
		{
			write(1, &str[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int		main(int ac, char **av)
{
	char	*tmp;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
	}
	ft_print(ac, av);
	return (0);
}
