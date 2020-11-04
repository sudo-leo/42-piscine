/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:18:56 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/03 17:19:03 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int j;

	while (--ac)
	{
		j = 0;
		while (j < ft_strlen(av[ac]))
		{
			write(1, &av[ac][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
}
