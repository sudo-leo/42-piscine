/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:03:02 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/04 14:49:06 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int ris;

	ris = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power--)
		ris *= nb;
	return (ris);
}
