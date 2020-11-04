/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 15:30:18 by larmelli          #+#    #+#             */
/*   Updated: 2020/10/27 18:53:47 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
