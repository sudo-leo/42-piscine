/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:25:41 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/05 14:55:42 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int i;
	int j;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = min;
	j = 0;
	array = malloc((max - min) * sizeof(int) + 1);
	if (array == NULL)
	{
		*range = 0;
		return (-1);
	}
	while (i < max)
	{
		array[j] = i;
		j++;
		i++;
	}
	*range = array;
	return (j);
}
