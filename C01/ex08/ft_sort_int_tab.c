/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:31:16 by larmelli          #+#    #+#             */
/*   Updated: 2020/10/26 15:38:17 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		s_index;
	int		r_index;

	s_index = 0;
	while (s_index < size)
	{
		r_index = s_index + 1;
		while (r_index <= size)
		{
			if (tab[r_index] < tab[s_index])
			{
				temp = tab[s_index];
				tab[s_index] = tab[r_index];
				tab[r_index] = temp;
			}
			r_index++;
		}
		s_index++;
	}
}
