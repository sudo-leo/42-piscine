/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:12:58 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/05 12:09:25 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *a;
	int i;
	int range;
	int index;

	i = min;
	index = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	a = malloc(range * sizeof(int) + 1);
	while (i < max)
	{
		a[index] = i;
		index++;
		i++;
	}
	return (a);
}
