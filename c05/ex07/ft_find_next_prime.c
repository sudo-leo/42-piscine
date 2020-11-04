/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:49:09 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/03 19:44:29 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long	i;

	if (nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 0)
		return (0);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (1)
	{
		if (!ft_is_prime(nb))
			return (ft_find_next_prime(nb + 1));
		else
		{
			return (nb);
		}
	}
	return (nb);
}
